/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wati-Radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Wati-Theo <wati-theo@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:38:33 by Wati-Theo         #+#    #+#             */
/*   Updated: 2022/06/27 18:38:33 by Wati-Theo        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Wati_PushSwap.h"


void	radix(t_stack *stack)
{
	int	i;
	int	j;
	int	n;
	int	size;

	i = 0;
	size = stack->element_a;
	while (!a_is_sorted(stack))
	{
		j = 0;
		while (j < size)
		{
			n = stack->stack_a[0];
			if ((n >> i) & 1)
				wati_ra(stack);
			else
				wati_pb(stack);
			j++;
		}
		i++;
		while (stack->element_b)
			wati_pa(stack);
	}
	// debug(stack);
} 
 
