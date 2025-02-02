/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:30:59 by abjellal          #+#    #+#             */
/*   Updated: 2025/02/02 11:30:59 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_node **dest, t_node **src)
{
    if (!src || !(*src)) 
        return;
    t_node *temp = *src; 
    *src = (*src)->next;
    temp->next = *dest;
    *dest = temp;
}

void rotate(t_node **stack)
{
    if (!stack || !(*stack) || !((*stack)->next))
        return;

    t_node *first = *stack;
    t_node *last = *stack;

    while (last->next)
        last = last->next;
    *stack = first->next;
    first->next = NULL;
    last->next = first;
}

void swap(t_node **stack)
{
    if (!stack || !(*stack) || !((*stack)->next))
        return;
    t_node *first = *stack;
    t_node *second = first->next;
    first->next = second->next;
    second->next = first;
    *stack = second; 
}
void reverse_rotate(t_node **stack)
{
    if (!stack || !(*stack) || !((*stack)->next))
        return;

    t_node *prev = NULL;
    t_node *last = *stack;

    while (last->next)
    {
        prev = last;
        last = last->next;
    }
    prev->next = NULL; 
    last->next = *stack;
    *stack = last;
}
