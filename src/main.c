/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:23:10 by abjellal          #+#    #+#             */
/*   Updated: 2025/02/02 11:23:10 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void push_swap(t_node **stack_a, t_node **stack_b, int stack_size)
{
    if (stack_size == 2 && !is_sorted(*stack_a))
        sa(stack_a);
    else if (stack_size == 3)
        sort_small_stack(stack_a, stack_b);
    else if (stack_size > 3 && !is_sorted(*stack_a))
        sort_large_stack(stack_a, stack_b);
}

int main(int argc, char **argv)
{
    t_node *stack_a;
    t_node *stack_b;
    int stack_size;

    if (argc < 2)
        return (0);
    stack_a = parse_input(argc, argv);
    if (!stack_a)
    {
        ft_putstr("Error\n");
        return (1);
    }
    stack_b = NULL;
    stack_size = ft_lstsize(stack_a);

    push_swap(&stack_a, &stack_b, stack_size);
    free_stack(stack_a);
    free_stack(stack_b);

    return (0);
}
