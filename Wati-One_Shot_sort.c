/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wati-One_Shot_sort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:49:45 by tschlege          #+#    #+#             */
/*   Updated: 2022/07/14 18:41:59 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Wati_PushSwap.h"

int	wati_check_for_the_last(t_stack *stack)
{
	if ((stack->stack_b[0] > stack->stack_a[0] && stack->stack_b[0]
			< stack->stack_a[1]) && (stack->stack_b[1] < stack->stack_b[0]
			&& stack->stack_b[1] < stack->stack_a[2]
			&& stack->stack_b[1] < stack->stack_a[1]
			&& stack->stack_b[1] > stack->stack_a[0]))
		return (667);
	return (-42);
}

int	wati_check_for_one_shot(t_stack *stack)
{
	if ((stack->stack_b[0] < stack->stack_a[0] && stack->stack_b[1]
			< stack->stack_a[0]) && stack->stack_b[1] < stack->stack_b[0])
		return (1);
	else if ((stack->stack_b[0] < stack->stack_a[0] && stack->stack_b[1]
			< stack->stack_a[0]) && stack->stack_b[1] > stack->stack_b[0])
		return (2);
	else if ((stack->stack_b[0] < stack->stack_a[2] && stack->stack_b[0]
			> stack->stack_a[1]) && (stack->stack_b[1] < stack->stack_b[0]
			&& stack->stack_b[1] < stack->stack_a[2]
			&& stack->stack_b[1] > stack->stack_a[1]))
		return (3);
	else if ((stack->stack_b[0] > stack->stack_a[0] && stack->stack_b[0]
			< stack->stack_a[1]) && (stack->stack_b[1] > stack->stack_b[0]
			&& stack->stack_b[1] < stack->stack_a[2]
			&& stack->stack_b[1] < stack->stack_a[1]))
		return (4);
	else if ((stack->stack_b[0] > stack->stack_a[0] && stack->stack_b[0]
			< stack->stack_a[1]) && (stack->stack_b[1] > stack->stack_b[0]
			&& stack->stack_b[1] < stack->stack_a[2]
			&& stack->stack_b[1] > stack->stack_a[1]))
		return (5);
	else if (wati_check_for_the_last(stack) == 667)
		return (6);
	return (0);
}

int	one_shot_action(t_stack *stack)
{
	if (wati_check_for_one_shot(stack) == 1 && wati_pa(stack) && wati_pa(stack))
		return (1);
	else if (wati_check_for_one_shot(stack) == 2 && wati_sb(stack)
		&& wati_pa(stack) && wati_pa(stack))
		return (1);
	else if (wati_check_for_one_shot(stack) == 3 && wati_rra(stack)
		&& wati_pa(stack) && wati_pa(stack) && wati_ra(stack) && wati_ra(stack)
		&& wati_ra(stack))
		return (1);
	else if (wati_check_for_one_shot(stack) == 4 && wati_ra(stack)
		&& wati_sb(stack) && wati_pa(stack) && wati_pa(stack)
		&& wati_rra(stack))
		return (1);
	else if (wati_check_for_one_shot(stack) == 5 && wati_ra(stack)
		&& wati_pa(stack) && wati_rra(stack) && wati_rra(stack)
		&& wati_pa(stack) && wati_ra(stack) && wati_ra(stack))
		return (1);
	else if (wati_check_for_one_shot(stack) == 6 && wati_ra(stack)
		&& wati_pa(stack) && wati_pa(stack) && wati_rra(stack))
		return (1);
	return (-2);
}
