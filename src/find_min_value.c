/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:20:22 by abjellal          #+#    #+#             */
/*   Updated: 2025/02/02 11:20:22 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_min(t_node *stack)
{
    int min_value;
    
    if (!stack)
        return (0);
    min_value = stack->value;

    stack = stack->next;

    while (stack)
    {
        if (stack->value < min_value)
            min_value = stack->value;
        stack = stack->next;
    }

    return min_value;
}
