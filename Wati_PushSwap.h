/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wati_PushSwap.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:57:05 by tschlege          #+#    #+#             */
/*   Updated: 2022/07/14 23:46:07 by tschlege         ###   ########lyon.fr   */
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

void			wati_exit(int choice);
void			wati_parser(char **argv, t_stack *stack);
void			ft_putstr_fd(char	*s, int fd);
void			check_if_digit(char **argv, t_stack *stack);
void			check_if_doubled(char **argv, t_stack *stack);
void			check_if_int(char **argv, t_stack *stack);
int				ft_isdigit(int c);
long long int	ft_atoi(const char *str);
void			ft_putnbr_to_stack_a(char **argv, t_stack *stack);
void			hardcode_sort(t_stack *stack);
int				a_is_sorted(t_stack *stack);
void			radix(t_stack *stack);
int				one_shot_action(t_stack *stack);
void			rra_first(int rotation, t_stack *stack);
void			ra_first(int rotation, t_stack *stack);
/*
** Wati Stacks Actions 
*/
int				wati_sa(t_stack *stack);
int				wati_sb(t_stack *stack);
int				wati_ss(t_stack *stack);
int				wati_ra(t_stack *stack);
int				wati_rb(t_stack *stack);
void			wati_rr(t_stack *stack);
int				wati_rra(t_stack *stack);
int				wati_rrb(t_stack *stack);
void			wati_rrr(t_stack *stack);
int				wati_pa(t_stack *stack);
int				wati_pb(t_stack *stack);
#endif
