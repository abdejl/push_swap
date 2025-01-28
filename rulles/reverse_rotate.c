/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 23:11:22 by abjellal          #+#    #+#             */
/*   Updated: 2025/01/22 23:11:44 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void reverse_rotate(t_node **stack)
{
    if (!stack || !(*stack) || !((*stack)->next))
        return; // Do nothing if stack is empty or has only one element

    t_node *prev = NULL;
    t_node *last = *stack;

    // Traverse to the last node while keeping track of the previous node
    while (last->next)
    {
        prev = last;
        last = last->next;
    }

    prev->next = NULL;  // Remove last node from the end
    last->next = *stack; // Move last node to the top
    *stack = last; // Update head pointer
}
