/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_from_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:24:22 by abjellal          #+#    #+#             */
/*   Updated: 2025/02/02 11:24:22 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int pop_from_stack(t_node **stack)
{
    t_node *temp;
    int value;

    if (!*stack)
    {
        return (0);
    }
    value = (*stack)->value;
    temp = *stack;
    *stack = (*stack)->next;
    free(temp);
    return (value);
}
