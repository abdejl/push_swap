/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:19:47 by abjellal          #+#    #+#             */
/*   Updated: 2025/02/02 11:19:47 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_max(t_node *stack)
{
    int max_value;

    if (!stack)
        return (0);
    max_value = stack->value;
    stack = stack->next;
    while (stack)
    {
        if (stack->value > max_value)
            max_value = stack->value; 
        stack = stack->next;
    }
    return max_value;
}
