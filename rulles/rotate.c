/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:29:47 by abjellal          #+#    #+#             */
/*   Updated: 2025/01/21 15:43:51 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate(t_list **stack)
{
    if (!stack || !(*stack) || !((*stack)->next))
        return; // Do nothing if stack is empty or has only one element

    t_list *first = *stack;
    t_list *last = *stack;

    // Find the last node
    while (last->next)
        last = last->next;

    *stack = first->next; // Update head to second element
    first->next = NULL;   // Detach first node
    last->next = first;   // Move first node to the end
}
