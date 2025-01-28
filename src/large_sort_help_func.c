#include "push_swap.h"

// Function to get the maximum number of bits required to represent the largest number in stack_a
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

    // Return the number of bits required to represent the maximum value
    return (int)(log2(max_value) + 1);
}

// Function to check if stack_a is sorted
int is_sorted(t_node *stack_a)
{
    while (stack_a && stack_a->next)
    {
        if (stack_a->value > stack_a->next->value)
            return (0);  // Stack is not sorted
        stack_a = stack_a->next;
    }
    return (1);  // Stack is sorted
}
