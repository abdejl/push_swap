/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 23:00:44 by abjellal          #+#    #+#             */
/*   Updated: 2025/01/22 23:01:12 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_node **dest, t_node **src)
{
    if (!src || !(*src)) 
        return; // Do nothing if source stack is empty

    t_node *temp = *src; // Store the top element of src
    *src = (*src)->next; // Move src's head to the next element
    temp->next = *dest;  // Attach src's old top to dest
    *dest = temp;        // Update dest's head to new top element
}
