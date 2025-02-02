#include "push_swap.h"

int rra(t_node **stack_a)
{
    reverse_rotate(stack_a);
    ft_putstr("rra\n");
    return (0);
}

int rrb(t_node **stack_b)
{
    reverse_rotate(stack_b);
    ft_putstr("rrb\n");
    return (0);
}

int rrr(t_node **stack_a, t_node **stack_b)
{
    reverse_rotate(stack_a);
    reverse_rotate(stack_b);
    ft_putstr("rrr\n");
    return (0);
}

int sa(t_node **stack_a)
{
    swap(stack_a);
    ft_putstr("sa\n");
    return (0);
}

int sb(t_node **stack_b)
{
    swap(stack_b);
    ft_putstr("sb\n");
    return (0);
}

int ss(t_node **stack_a, t_node **stack_b)
{
    swap(stack_a);
    swap(stack_b);
    ft_putstr("ss\n");
    return (0);
}
