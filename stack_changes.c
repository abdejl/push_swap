/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_changes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:31:39 by abjellal          #+#    #+#             */
/*   Updated: 2025/02/02 11:31:39 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void print_stacks(t_node *stack_a, t_node *stack_b)
// {
//     printf("Stack A: ");
//     while (stack_a)
//     {
//         printf("%d ", stack_a->value);
//         stack_a = stack_a->next;
//     }
//     printf("\nStack B: ");
//     while (stack_b)
//     {
//         printf("%d ", stack_b->value);
//         stack_b = stack_b->next;
//     }
//     printf("\n");
// }

void print_stacks(t_node *stack_a, t_node *stack_b)
{
    printf("Stack A: ");
    while (stack_a)
    {
        printf("%d ", stack_a->value);
        stack_a = stack_a->next;
    }
    printf("\n");
    printf("Stack B: ");
    while (stack_b)
    {
        printf("%d ", stack_b->value);
        stack_b = stack_b->next;
    }
    printf("\n");
}
