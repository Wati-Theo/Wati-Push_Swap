/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wati-Main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:54:42 by tschlege          #+#    #+#             */
/*   Updated: 2022/07/14 21:23:24 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Wati_PushSwap.h"

void	wati_exit(int choice)
{
	if (choice)
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
}

int	main(int argc, char *argv[])
{
	t_stack	stack;

	stack.stack_a = NULL;
	stack.stack_b = NULL;
	stack.element_a = argc - 1;
	stack.element_b = 0;
	stack.counter = 0;
	if (argc < 2)
		wati_exit(0);
	wati_parser(argv, &stack);
	return (0);
}
