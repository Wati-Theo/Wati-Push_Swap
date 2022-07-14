/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wati-Hardcode_sort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Wati-Theo <wati-theo@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:29:46 by Wati-Theo         #+#    #+#             */
/*   Updated: 2022/06/27 18:29:46 by Wati-Theo        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Wati_PushSwap.h"

void	hardcode_sort_3_nbr(t_stack *stack)
{
	if (stack->stack_a[0] > stack->stack_a[1] && stack->stack_a[0]
		< stack->stack_a[2])
		wati_sa(stack);
	else if ((stack->stack_a[0] > stack->stack_a[1] && stack->stack_a[0]
			> stack->stack_a[2]) && (stack->stack_a[1] > stack->stack_a[2]))
	{
		wati_sa(stack);
		wati_rra(stack);
	}
	else if ((stack->stack_a[0] > stack->stack_a[1] && stack->stack_a[0]
			> stack->stack_a[2]) && (stack->stack_a[1] < stack->stack_a[2]))
		wati_ra(stack);
	else if (stack->stack_a[0] < stack->stack_a[1] && stack->stack_a[0]
		< stack->stack_a[2])
	{
		wati_sa(stack);
		wati_ra(stack);
	}
	else if (stack->stack_a[0] < stack->stack_a[1] && stack->stack_a[0]
		> stack->stack_a[2])
		wati_rra(stack);
}

int	where_i_go(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->element_a)
	{
		if (stack->stack_b[0] < stack->stack_a[0])
			return (-42);
		if (stack->stack_b[0] == stack->stack_a[stack->element_a - 1])
			return (-420);
		else if (stack->stack_b[0] < stack->stack_a[i])
			return (i);
		i++;
	}
	return (i);
}

void	rra_first(int rotation, t_stack *stack)
{
	int	i;

	i = rotation;
	while (i)
	{
		wati_rra(stack);
		i--;
	}
	wati_pa(stack);
	i = rotation + 1;
	while (i)
	{
		wati_ra(stack);
		i--;
	}
}

void	ra_first(int rotation, t_stack *stack)
{
	int	i;

	i = rotation;
	while (i)
	{
		wati_ra(stack);
		i--;
	}
	wati_pa(stack);
	i = rotation;
	while (i)
	{
		wati_rra(stack);
		i--;
	}
}

void	go_to(int index, t_stack *stack)
{
	if (where_i_go(stack) == -42)
		wati_pa(stack);
	else if (where_i_go(stack) == -420)
	{
		wati_pa(stack);
		wati_ra(stack);
	}
	else if (where_i_go(stack) < (stack->element_a / 2))
	{
		ra_first(where_i_go(stack), stack);
	}
	else
	{
		rra_first(stack->element_a - where_i_go(stack), stack);
	}
}

void	hardcode_sort(t_stack *stack)
{
	if (stack->element_a == 5)
	{
		wati_pb(stack);
		wati_pb(stack);
	}
	else if (stack->element_a == 4)
		wati_pb(stack);
	else if (stack->element_a == 2)
		wati_sa(stack);
	if (!a_is_sorted(stack))
		hardcode_sort_3_nbr(stack);
	if (one_shot_action(stack) == -2)
	{
		while (stack->element_b)
		{
			go_to(where_i_go(stack), stack);
		}
	}
}
