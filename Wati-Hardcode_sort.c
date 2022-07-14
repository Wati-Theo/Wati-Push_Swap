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

void	debug(t_stack *stack)
{
	print_stacks(stack);
	printf("\nA Hardcode_sorted in %d shots\n", stack->counter);
}

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
	// print_stacks(stack);
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
	if (where_i_go(stack) == -42) // le plus petit donc tout en haut
		wati_pa(stack);
	else if (where_i_go(stack) == -420) // le plus grand donc tout en bas
	{
		wati_pa(stack);
		wati_ra(stack);
	}
	else if (where_i_go(stack) < (stack->element_a / 2))
	{
		// printf("RA FIRST\n");
		ra_first(where_i_go(stack), stack);
	}
	else
	{
		// printf("RRA FIRST, %d-%d=%d\n", stack->element_a, where_i_go(stack), stack->element_a - where_i_go(stack));
		rra_first(stack->element_a - where_i_go(stack), stack);
	}
	// print_stacks(stack);
}

int one_shot(t_stack *stack)
{
	if ((stack->stack_b[0] < stack->stack_a[0] && stack->stack_b[1]
			< stack->stack_a[0]) && stack->stack_b[1] < stack->stack_b[0]) // stackb dja trie pour stack a
	{
		// printf("\nONE SHOT 1\n");
		wati_pa(stack);
		wati_pa(stack);
		return (1);
	}
	else if ((stack->stack_b[0] < stack->stack_a[0] && stack->stack_b[1]
			< stack->stack_a[0]) && stack->stack_b[1] > stack->stack_b[0]) // stack b a trie puis go to stack a
	{
		// printf("\nONE SHOT 2\n");
		wati_sb(stack);
		wati_pa(stack);
		wati_pa(stack);
		return (1);
	}
	else if ((stack->stack_b[0] < stack->stack_a[2] && stack->stack_b[0] >
		stack->stack_a[1]) && (stack->stack_b[1] < stack->stack_b[0] &&
		stack->stack_b[1] < stack->stack_a[2] &&
		stack->stack_b[1] > stack->stack_a[1]))
	{
		// printf("\nONE SHOT crasseux 1\n");
		wati_rra(stack);
		wati_pa(stack);
		wati_pa(stack);
		wati_ra(stack);
		wati_ra(stack);
		wati_ra(stack);
	}
	else if ((stack->stack_b[0] > stack->stack_a[0] && stack->stack_b[0] <
		stack->stack_a[1]) && (stack->stack_b[1] > stack->stack_b[0] &&
		stack->stack_b[1] < stack->stack_a[2] &&
		stack->stack_b[1] < stack->stack_a[1]))
	{
		// printf("\nONE SHOT crasseux 2\n");
		wati_ra(stack);
		wati_sb(stack);
		wati_pa(stack);
		wati_pa(stack);
		wati_rra(stack);
	}
	else if ((stack->stack_b[0] > stack->stack_a[0] && stack->stack_b[0] <
		stack->stack_a[1]) && (stack->stack_b[1] > stack->stack_b[0] &&
		stack->stack_b[1] < stack->stack_a[2] &&
		stack->stack_b[1] > stack->stack_a[1]))
	{
		// printf("\nONE SHOT crasseux 3\n");
		wati_ra(stack);
		wati_pa(stack);
		wati_rra(stack);
		wati_rra(stack);
		wati_pa(stack);
		wati_ra(stack);
		wati_ra(stack);
	}
	else if ((stack->stack_b[0] > stack->stack_a[0] && stack->stack_b[0] <
		stack->stack_a[1]) && (stack->stack_b[1] < stack->stack_b[0] &&
		stack->stack_b[1] < stack->stack_a[2] &&
		stack->stack_b[1] < stack->stack_a[1] &&
		stack->stack_b[1] > stack->stack_a[0]))
	{
		// printf("\nONE SHOT crasseux 4\n");
		wati_ra(stack);
		wati_pa(stack);
		wati_pa(stack);
		wati_rra(stack);
	}
	return (-2);
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
	// print_stacks(stack);
	// printf("tri de 3 fini\n");
	if (one_shot(stack) == -2)
	{
		while (stack->element_b)
		{
			// printf("jul:%d\n", where_i_go(stack));
			go_to(where_i_go(stack), stack);
		}
	
	}
	// debug(stack);
}
