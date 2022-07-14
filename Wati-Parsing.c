/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wati-Parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 17:12:37 by tschlege          #+#    #+#             */
/*   Updated: 2022/07/01 17:12:26 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Wati_PushSwap.h"

void	check_if_doubled(char **argv, t_stack *stack)
{
	int	i;
	int	j;

	j = 1;
	while (j < stack->element_a)
	{
		i = j + 1;
		while (i <= stack->element_a)
		{
			// printf("check de argv[%d]=%d et de argv[%d]=%d\n", i, ft_atoi(argv[i]), j, ft_atoi(argv[j]));
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				wati_exit("check_if_doubled", 54);
			i++;
		}
		j++;
	}
	// printf("input ok\n");
	ft_putnbr_to_stack_a(argv, stack);
}

void	check_if_digit(char **argv, t_stack *stack)
{
	int	i;
	int	j;

	j = 1;
	while (j < stack->element_a + 1)
	{
		i = 0;
		// printf("check de argv[%d]\n", j);
		while (argv[j][i])
		{
			if (argv[j][i] == '-' && !ft_isdigit(argv[j][i + 1]))
				wati_exit("check_if_digit", 69);
			else if (argv[j][i] == '-' && ft_isdigit(argv[j][i + 1]))
				i++;
			// printf(" %c\n", argv[j][i]);
			if (!ft_isdigit(argv[j][i]))
				wati_exit("check_if_digit", 57);
			i++;
		}
		j++;
	}
	check_if_doubled(argv, stack);
}

void	wati_parser(char **argv, t_stack *stack)
{
	check_if_digit(argv, stack);
}
