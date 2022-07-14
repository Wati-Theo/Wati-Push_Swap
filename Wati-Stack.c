/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wati-Stack_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Wati-Theo <wati-theo@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:32:52 by Wati-Theo         #+#    #+#             */
/*   Updated: 2022/06/21 19:32:52 by Wati-Theo        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Wati_PushSwap.h"

int	a_is_sorted(t_stack *stack)
{
	int	i;
	int	max;

	i = 0;
	max = stack->stack_a[i];
	i++;
	while (i < stack->element_a)
	{
		if (max > stack->stack_a[i])
			return (0);
		max = stack->stack_a[i];
		i++;
	}
	// printf("\nALREADY SORT\n");
	return (1);
}

void	print_stacks(t_stack *stack)
{
	int	i;

	i = 0;
	printf("\n");
	while (i < stack->element_a)
	{
		printf("%d %d\n", stack->stack_a[i], stack->stack_b[i]);
		i++;
	}
	printf("\n");
}

void	ft_putnbr_to_stack_a(char **argv, t_stack *stack)
{
	int	i;

	i = 1;
	stack->stack_a = malloc(stack->element_a * sizeof(int));
	stack->stack_b = malloc(stack->element_a * sizeof(int));
	while (i <= stack->element_a)
	{
		stack->stack_a[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	// print_stacks(stack);
	if (a_is_sorted(stack))
		wati_exit("A is sorted\n", 0);
	// printf("A isn't sorted\n\n");
	if (stack->element_a < 6)
		hardcode_sort(stack);
	radix(stack);
	// print_stacks(stack);
}
