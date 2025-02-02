/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:27:16 by abjellal          #+#    #+#             */
/*   Updated: 2025/02/02 11:27:16 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_to_stack(t_node **stack, int value)
{
    t_node *new_node;

    new_node = create_node(value);
    if (!new_node)
    {
        ft_putstr("Error\n");
        return;
    }
    new_node->next = *stack;
    *stack = new_node;
}
