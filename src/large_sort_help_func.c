/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large_sort_help_func.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:21:42 by abjellal          #+#    #+#             */
/*   Updated: 2025/02/02 11:21:42 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_max_bits(t_node *stack_a)
{
    int max_value = stack_a->value;
    t_node *current = stack_a;

    while (current)
    {
        if (current->value > max_value)
            max_value = current->value;
        current = current->next;
    }
    return (int)(log2(max_value) + 1);
}

