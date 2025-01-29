#include "push_swap.h"

int pa(t_node **stack_b, t_node **stack_a)
{
    push(stack_b, stack_a);
    ft_putstr("pa\n");
    return (0);
}

int pb(t_node **stack_a, t_node **stack_b)
{
    push(stack_a, stack_b);
    ft_putstr("pb");
        return (0);
}

int ra(t_node **stack_a)
{
    rotate(stack_a);
    ft_putstr("ra/n");
        return (0);
}

int rb(t_node ** stack_b)
{
    rotate(stack_b);
    ft_putstr("rb\n");
    return (0);
}

int rr(t_node **stack_a, t_node **stack_b)
{
    rotate(stack_a);
    rotate(stack_b);
    ft_putstr("rr\n");
    return (0);
}