/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wati-Hardcode_sort_prt2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 23:43:59 by tschlege          #+#    #+#             */
/*   Updated: 2022/07/14 23:46:27 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Wati_PushSwap.h"

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
