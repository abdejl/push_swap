#include "push_swap.h"

// Function to check if a stack is sorted in ascending order
int is_sorted(t_list *stack)
{
    while (stack && stack->next)
    {
        if (stack->value > stack->next->value)
            return (0);  // Return 0 if the stack is not sorted (found a pair of elements where value > next value)
        stack = stack->next;  // Move to the next element
    }
    return (1);  // Return 1 if the stack is sorted
}
