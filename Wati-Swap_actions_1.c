/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wati-Swap_actions_1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:27:40 by tschlege          #+#    #+#             */
/*   Updated: 2022/07/14 20:18:39 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Wati_PushSwap.h"

int	wati_ss(t_stack *stack)
{
	wati_sa(stack);
	wati_sb(stack);
	stack->counter--;
	ft_putstr_fd("ss\n", 1);
	return (1);
}

int	wati_sa(t_stack *stack)
{
	int	tmp;

	tmp = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = tmp;
	stack->counter++;
	ft_putstr_fd("sa\n", 1);
	return (1);
}

int	wati_sb(t_stack *stack)
{
	int	tmp;

	tmp = stack->stack_b[0];
	stack->stack_b[0] = stack->stack_b[1];
	stack->stack_b[1] = tmp;
	stack->counter++;
	ft_putstr_fd("sb\n", 1);
	return (1);
}
