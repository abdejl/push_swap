/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 09:33:45 by abjellal          #+#    #+#             */
/*   Updated: 2025/02/02 12:19:46 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/libft.h"
#include "../include/push_swap.h"

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
#include <math.h>

typedef struct s_node
{
    int index;
    int value;
    struct s_node *next;
} t_node;

//ALGORITHM FUNCTIONS
void print_stacks(t_node *stack_a, t_node *stack_b);
void sort_small_stack(t_node **stack_a, t_node **stack_b);
void sort_large_stack(t_node **stack_a, t_node **stack_b);
void push_to_sorted_stack(t_node **source_stack, t_node **dest_stack);
void push_to_stack(t_node **stack, int value);
void sort_three(t_node **stack_a);
void sort_four(t_node **stack_a, t_node **stack_b);
void sort_five(t_node **stack_a, t_node **stack_b);

//HELPER FUNCTIONS
t_node *create_node(int value);
void free_stack(t_node *stack);
int is_valid_number(char *str);
int has_duplicates(t_node *stack);
int find_min(t_node *stack);
int find_max(t_node *stack);
int is_sorted(t_node *stack);
int get_max_bits(t_node *stack);
int ft_lstsize(t_node *lst);
t_node *parse_input(int argc, char **argv);
void print_stack(t_node *stack);
void ft_putstr(char *str);
void free_split(char **split);

//STACK OPERATIONS FUNCTIONS
int pa(t_node **stack_a, t_node **stack_b);
int pb(t_node **stack_a, t_node **stack_b);
int sa(t_node **stack_a);
int sb(t_node **stack_b);
int ss(t_node **stack_a, t_node **stack_b);
int ra(t_node **stack_a);
int rb(t_node **stack_b);
int rr(t_node **stack_a, t_node **stack_b);
int rra(t_node **stack_a);
int rrb(t_node **stack_b);
int rrr(t_node **stack_a, t_node **stack_b);
void swap(t_node **stack);
void rotate(t_node **stack);
void push(t_node **dest, t_node **src);
void reverse_rotate(t_node **stack);

//INPUT PARSING FUNCTIONS
t_node *parse_input(int argc, char **argv);
void init_stack(t_node **stack_a, t_node **stack_b);
void ft_lstadd_back(t_node **lst, t_node *new);

#endif
