/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wati-Debug.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:17:16 by tschlege          #+#    #+#             */
/*   Updated: 2022/07/14 16:00:31 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Wati_PushSwap.h"

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

void	debug(t_stack *stack)
{
	print_stacks(stack);
	printf("\nA Hardcode_sorted in %d shots\n", stack->counter);
}
