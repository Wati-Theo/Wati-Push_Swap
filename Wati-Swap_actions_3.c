/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wati-Swap_actions_3.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:22:33 by tschlege          #+#    #+#             */
/*   Updated: 2022/06/29 18:20:04 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Wati_PushSwap.h"

void	wati_pb(t_stack *stack)
{
	int	i;

	i = stack->element_b;
	// printf("element %d\n", stack->element_a);
	while (i)
	{
		// printf("stack[%d]=%d = stack[%d]=%d \n", i, stack->stack_a[i], i - 1, stack->stack_a[i - 1]);
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	// printf("stack[%d]=%d = stack[0]=%d \n", i, stack->stack_a[i], stack->stack_b[0]);
	stack->stack_b[i] = stack->stack_a[0];
	i = 0;
	while (i < stack->element_a - 1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->element_b++;
	stack->element_a--;
	stack->counter++;
	printf("pb\n");
}

void	wati_pa(t_stack *stack)
{
	int	i;

	i = stack->element_a;
	// printf("element %d\n", stack->element_a);
	while (i)
	{
		// printf("stack[%d]=%d = stack[%d]=%d \n", i, stack->stack_a[i], i - 1, stack->stack_a[i - 1]);
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	// printf("stack[%d]=%d = stack[0]=%d \n", i, stack->stack_a[i], stack->stack_b[0]);
	stack->stack_a[i] = stack->stack_b[0];
	i = 0;
	while (i < stack->element_b - 1)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->element_a++;
	stack->element_b--;
	stack->counter++;
	printf("pa\n");
}

void	wati_rrr(t_stack *stack)
{
	wati_rra(stack);
	wati_rrb(stack);
	printf("rrr\n");
	stack->counter--;
}

void	wati_rra(t_stack *stack)
{
	int	tmp;
	int	i;

	i = stack->element_a - 1;
	tmp = stack->stack_a[stack->element_a - 1];
	while (i)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[i] = tmp;
	stack->counter++;
	printf("rra\n");
	// printf("wati-rra\n");
}

void	wati_rrb(t_stack *stack)
{
	int	tmp;
	int	i;

	i = stack->element_b - 1;
	tmp = stack->stack_b[stack->element_b - 1];
	while (i)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[i] = tmp;
	stack->counter++;
	printf("rrb\n");
	// printf("wati-rrb\n");
}
