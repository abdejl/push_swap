#include "push_swap.h"

t_list *create_node(int value)
{
    t_list *new_node;

    new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return (NULL);
    new_node->value = value;
    new_node->index = -1; // Indexing can be assigned later if needed
    new_node->next = NULL;
    return (new_node);
}

void free_stack(t_list *stack)
{
    t_list *temp;

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

int has_duplicates(t_list *stack)
{
    t_list *current;
    t_list *checker;

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


static int process_argument(char *arg, t_list **stack_a)
{
    char **split_args;
    int value;
    t_list *new_node;
    int i = 0;

    split_args = ft_split(arg, ' ');
    if (!split_args)
        return (0); // Memory allocation failure
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

static int validate_stack(t_list *stack_a)
{
    if (has_duplicates(stack_a))
    {
        free_stack(stack_a);
        ft_putstr("Error\n");
        return (0);
    }
    return (1);
}

t_list *parse_input(int argc, char **argv)
{
    t_list *stack_a = NULL;
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
