/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:25:13 by abjellal          #+#    #+#             */
/*   Updated: 2025/02/02 11:25:13 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_stack(t_node *stack)
{
    while (stack)
    {
        ft_putnbr(stack->value);
        ft_putstr(" ");
        stack = stack->next;
    }
    ft_putstr("\n");
}
