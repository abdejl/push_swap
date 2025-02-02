#include "push_swap.h"

void sort_large_stack(t_node **stack_a, t_node **stack_b)
{
    int max_bits;
    int i = 0;
    int j;

    max_bits = get_max_bits(*stack_a);
    while (i < max_bits)
    {
        j = 0;
        while (j < ft_lstsize(*stack_a))
        {
            if ((((*stack_a)->value >> i) & 1) == 0)
                ra(stack_a);
            else
                pb(stack_a, stack_b); 

            j++;
        }
        while (*stack_b)
            pa(stack_a, stack_b);
        i++;
    }
}
