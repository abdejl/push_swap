#include "push_swap.h"

// Function to perform radix sort (Turk algorithm)
void sort_large_stack(t_node **stack_a, t_node **stack_b)
{
    int max_bits;
    int i = 0;
    int j;

    // Get the maximum number of bits required to represent the largest value
    max_bits = get_max_bits(*stack_a);
    // Perform the sorting for each bit from 0 to max_bits
    while (i < max_bits)
    {
        j = 0;
        while (j < ft_lstsize(*stack_a))
        {
            if ((((*stack_a)->value >> i) & 1) == 0)
                ra(stack_a);  // Rotate if the current bit is 0
            else
                pb(stack_a, stack_b);  // Push to stack_b if the current bit is 1

            j++;
        }
        // Move all elements from stack_b back to stack_a
        while (*stack_b)
            pa(stack_a, stack_b);  // Push back from stack_b to stack_a

        i++;
    }
}
