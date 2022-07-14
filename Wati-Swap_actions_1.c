/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wati-Swap_actions_1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:27:40 by tschlege          #+#    #+#             */
/*   Updated: 2022/06/29 18:18:39 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Wati_PushSwap.h"

void	wati_ss(t_stack *stack)
{
	wati_sa(stack);
	wati_sb(stack);
	stack->counter--;
	// printf("wati-ss\n");
	printf("ss\n");
}

void	wati_sa(t_stack *stack)
{
	int	tmp;

	tmp = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = tmp;
	stack->counter++;
	printf("sa\n");
	// printf("wati-sa\n");
}

void	wati_sb(t_stack *stack)
{
	int	tmp;

	tmp = stack->stack_b[0];
	stack->stack_b[0] = stack->stack_b[1];
	stack->stack_b[1] = tmp;
	stack->counter++;
	printf("sb\n");	
	// printf("wati-sb\n");
}
