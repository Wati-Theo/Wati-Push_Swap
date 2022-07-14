/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wati_PushSwap.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:57:05 by tschlege          #+#    #+#             */
/*   Updated: 2022/07/13 12:29:56 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WATI_PUSHSWAP_H
# define WATI_PUSHSWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack {
	int	*stack_a;
	int	*stack_b;
	int	element_a;
	int	element_b;
	int	counter;
}	t_stack;

void	ft_putstr_fd(char	*s, int fd);
void	wati_exit(char *str, int choice);
void	wati_parser(char **argv, t_stack *stack);
int		ft_isdigit(int c);
int		ft_atoi(const char *str);
void	ft_putnbr_to_stack_a(char **argv, t_stack *stack);
void	hardcode_sort(t_stack *stack);
int		a_is_sorted(t_stack *stack);
void	radix(t_stack *stack);
/*
** Wati Stacks Actions 
*/
void	wati_sa(t_stack *stack);
void	wati_sb(t_stack *stack);
void	wati_ss(t_stack *stack);
void	wati_ra(t_stack *stack);
void	wati_rb(t_stack *stack);
void	wati_rr(t_stack *stack);
void	wati_rra(t_stack *stack);
void	wati_rrb(t_stack *stack);
void	wati_rrr(t_stack *stack);
void	wati_pa(t_stack *stack);
void	wati_pb(t_stack *stack);
/*
** for tests 
*/
void	print_stacks(t_stack *stack);
void	debug(t_stack *stack);
#endif
