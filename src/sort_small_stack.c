/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:30:42 by abjellal          #+#    #+#             */
/*   Updated: 2025/02/02 11:30:42 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_small_stack(t_node **stack_a, t_node **stack_b)
{
    int size = ft_lstsize(*stack_a);

    if (size == 2)
        sa(stack_a);
    else if (size == 3)
        sort_three(stack_a);
    else if (size == 4)
        sort_four(stack_a, stack_b);
    else if (size == 5)
        sort_five(stack_a, stack_b);
}

void sort_three(t_node **stack_a)
{
    int first = (*stack_a)->value;
    int second = (*stack_a)->next->value;
    int third = (*stack_a)->next->next->value;

    if (first > second && second < third && first < third)
        sa(stack_a);
    else if (first > second && second > third)
    {
        sa(stack_a);
        rra(stack_a);
    }
    else if (first > second && first > third && second < third)
        ra(stack_a);
    else if (second > third && first < second)
        rra(stack_a);
    else if (first > third)
        sa(stack_a);
}

void sort_four(t_node **stack_a, t_node **stack_b)
{
    pb(stack_a, stack_b);
    // print_stacks(stack_a, stack_b);
    sort_three(stack_a);
    // print_stacks(stack_a, stack_b);
    pa(stack_a, stack_b);
    // print_stacks(stack_a, stack_b);
}

void sort_five(t_node **stack_a, t_node **stack_b)
{
    pb(stack_a, stack_b);
    pb(stack_a, stack_b);
    sort_three(stack_a);
    pa(stack_a, stack_b);
    pa(stack_a, stack_b);
}
