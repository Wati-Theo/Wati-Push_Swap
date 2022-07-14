/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wati-Swap_actions_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:20:45 by tschlege          #+#    #+#             */
/*   Updated: 2022/07/14 18:28:58 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Wati_PushSwap.h"

void	wati_rr(t_stack *stack)
{
	wati_ra(stack);
	wati_rb(stack);
	ft_putstr_fd("rr\n", 1);
	stack->counter--;
}

int	wati_rb(t_stack *stack)
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
	ft_putstr_fd("rb\n", 1);
	return (1);
}

int	wati_ra(t_stack *stack)
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
	ft_putstr_fd("ra\n", 1);
	return (1);
}
