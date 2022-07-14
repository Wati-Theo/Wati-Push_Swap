/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wati-Swap_actions_3.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:22:33 by tschlege          #+#    #+#             */
/*   Updated: 2022/07/14 18:24:48 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Wati_PushSwap.h"

int	wati_pb(t_stack *stack)
{
	int	i;

	i = stack->element_b;
	while (i)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
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
	ft_putstr_fd("pb\n", 1);
	return (1);
}

int	wati_pa(t_stack *stack)
{
	int	i;

	i = stack->element_a;
	while (i)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
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
	ft_putstr_fd("pa\n", 1);
	return (1);
}

void	wati_rrr(t_stack *stack)
{
	wati_rra(stack);
	wati_rrb(stack);
	ft_putstr_fd("rrr\n", 1);
	stack->counter--;
}

int	wati_rra(t_stack *stack)
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
	ft_putstr_fd("rra\n", 1);
	return (1);
}

int	wati_rrb(t_stack *stack)
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
	ft_putstr_fd("rrb\n", 1);
	return (1);
}
