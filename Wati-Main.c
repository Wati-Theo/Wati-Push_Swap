/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wati-Main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:54:42 by tschlege          #+#    #+#             */
/*   Updated: 2022/06/29 18:04:37 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Wati_PushSwap.h"

void	wati_exit(char *str, int choice)
{
	if (choice)
	{
		write(2, "Error\n", 6);
		printf(" %s\n", str);
		exit(EXIT_FAILURE);
	}
	printf(" %s\n", str);
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
		wati_exit("argc!", 42);
	// printf("element_a: %d\n", stack.element_a);
	wati_parser(argv, &stack);
}
