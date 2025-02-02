/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_target_pos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:20:55 by abjellal          #+#    #+#             */
/*   Updated: 2025/02/02 11:20:55 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_target_position(t_node *stack, int value)
{
    int position = 0;
    t_node *current = stack;

    while (current)
    {
        if (current->value == value)
            return position; 
        position++;
        current = current->next;
    }

    return -1;
}
