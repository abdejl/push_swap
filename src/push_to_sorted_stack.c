/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_sorted_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:26:53 by abjellal          #+#    #+#             */
/*   Updated: 2025/02/02 11:26:53 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_to_sorted_stack(t_node **source_stack, t_node **dest_stack)
{
    t_node *temp;
    
    if (!*source_stack)
        return;
    temp = *source_stack; 
    *source_stack = (*source_stack)->next; 
    if (!*dest_stack || (*dest_stack)->value >= temp->value)  // If the destination stack is empty or the element should be placed at the top
    {
        temp->next = *dest_stack;
        *dest_stack = temp;
    }
    else
    {
        t_node *current = *dest_stack;

        while (current->next && current->next->value < temp->value)
            current = current->next;

        temp->next = current->next;
        current->next = temp;
    }
}
