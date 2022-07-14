/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wati-Parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 17:12:37 by tschlege          #+#    #+#             */
/*   Updated: 2022/07/14 21:23:39 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Wati_PushSwap.h"

void	check_if_int(char **argv, t_stack *stack)
{
	int	i;

	i = 1;
	while (i <= stack->element_a)
	{
		if (ft_atoi(argv[i]) > 2147483647 || ft_atoi(argv[i]) < -2147483648)
			wati_exit(696);
		i++;
	}
	ft_putnbr_to_stack_a(argv, stack);
}

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
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				wati_exit(54);
			i++;
		}
		j++;
	}
	check_if_int(argv, stack);
}

void	check_if_digit(char **argv, t_stack *stack)
{
	int	i;
	int	j;

	j = 1;
	while (j < stack->element_a + 1)
	{
		i = 0;
		while (argv[j][i])
		{
			if (argv[j][i] == '-' && !ft_isdigit(argv[j][i + 1]))
				wati_exit(69);
			else if (argv[j][i] == '-' && ft_isdigit(argv[j][i + 1]))
				i++;
			if (!ft_isdigit(argv[j][i]))
				wati_exit(57);
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
