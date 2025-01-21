/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:28:50 by abjellal          #+#    #+#             */
/*   Updated: 2025/01/21 15:34:15 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(t_list **stack)
{
    if (!stack || !(*stack) || !((*stack)->next))
        return;

    t_list *first = *stack;
    t_list *second = first->next;
    first->next = second->next;
    second->next = first;
    *stack = second; 
}
