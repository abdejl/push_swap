/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_cost.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:18:34 by abjellal          #+#    #+#             */
/*   Updated: 2025/02/02 11:18:34 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int calculate_cost(t_node *stack_a, t_node *stack_b, int value)
{
    int cost = 0;
    t_node *current = stack_a;

    while (current)
    {
        if (current->value == value)
            break;
        cost++;
        current = current->next;
    }
    current = stack_b;
    while (current)
    {
        if (current->value == value)
            break;
        cost++;
        current = current->next;
    }
    return cost; 
}
