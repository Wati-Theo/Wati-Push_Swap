/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wati-Swap_actions_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:20:45 by tschlege          #+#    #+#             */
/*   Updated: 2022/06/29 18:19:11 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Wati_PushSwap.h"

void	wati_rr(t_stack *stack)
{
	wati_ra(stack);
	wati_rb(stack);
	printf("rr\n");
	// printf("wati-rr\n");
	stack->counter--;
}

void	wati_rb(t_stack *stack)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack->stack_b[0];
	while (i < stack->element_b - 1)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->stack_b[stack->element_b - 1] = tmp;
	stack->counter++;
	printf("rb\n");
	// printf("wati-rb\n");
}

void	wati_ra(t_stack *stack)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack->stack_a[0];
	while (i < stack->element_a - 1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->stack_a[stack->element_a - 1] = tmp;
	stack->counter++;
	printf("ra\n");
	// printf("wati-ra\n");
}
