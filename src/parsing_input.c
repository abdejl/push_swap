/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:23:52 by abjellal          #+#    #+#             */
/*   Updated: 2025/02/02 11:23:52 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node *create_node(int value)
{
    t_node *new_node;

    new_node = (t_node *)malloc(sizeof(t_node));
    if (!new_node)
        return (NULL);
    new_node->value = value;
    new_node->index = -1;
    new_node->next = NULL;
    return (new_node);
}

void free_stack(t_node *stack)
{
    t_node *temp;

    while (stack)
    {
        temp = stack;
        stack = stack->next;
        free(temp);
    }
}

int is_valid_number(char *str)
{
    int i = 0;

    if (str[i] == '-' || str[i] == '+')
        i++;
    if (!str[i])
        return (0);
    while (str[i])
    {
        if (!ft_isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

int has_duplicates(t_node *stack)
{
    t_node *current;

    while (stack)
    {
        current = stack->next;
        while (current)
        {
            if (stack->value == current->value)
                return (1);
            current = current->next;
        }
        stack = stack->next;
    }
    return (0);
}


static int process_argument(char *arg, t_node **stack_a)
{
    char **split_args;
    int value;
    t_node *new_node;
    int i = 0;

    split_args = ft_split(arg, ' ');
    if (!split_args)
        return (0);
    while (split_args[i])
    {
        if (!is_valid_number(split_args[i]) || ft_strlen(split_args[i]) > 11)
            return (free_split(split_args), 0);
        value = ft_atoi(split_args[i]);
        new_node = create_node(value);
        if (!new_node)
            return (free_split(split_args), free_stack(*stack_a), 0);
        ft_lstadd_back(stack_a, new_node);
        i++;
    }
    free_split(split_args);
    return (1);
}

static int validate_stack(t_node *stack_a)
{
    if (has_duplicates(stack_a))
    {
        free_stack(stack_a);
        ft_putstr("Error\n");
        return (0);
    }
    return (1);
}

t_node *parse_input(int argc, char **argv)
{
    t_node *stack_a = NULL;
    int i = 1;

    if (argc < 2)
        return (NULL);
    while (i < argc)
    {
        if (!process_argument(argv[i], &stack_a))
        {
            ft_putstr("Error\n");
            return (NULL);
        }
        i++;
    }
    if (!validate_stack(stack_a))
        return (NULL);
    return (stack_a);
}
