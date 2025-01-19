/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 09:33:45 by abjellal          #+#    #+#             */
/*   Updated: 2025/01/19 10:16:55 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/libft.h"

typedef struct s_list
{
    int index;
    int value;
    struct s_list *next;
} t_list;

int pa(t_list **stack_a, t_list **stack_b);
int pb(t_list **stack_a, t_list **stack_b);
int ra(t_list **stack_a);
int rb(t_list ** stack_b);
int rr(t_list **stack_a, t_list **stack_b);
int rra(t_list **stack_a);
int rrb(t_list **stack_b);
int rrr(t_list **stack_a, t_list ** stack_b);
int sa(t_list **stack_a);
int sb(t_list **stack_b);
int ss(t_list **stack_a, t_list **stack_b)

#endif