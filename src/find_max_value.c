#include "push_swap.h"

// Function to find the maximum value in a stack
int find_max(t_list *stack)
{
    int max_value;

    if (!stack)
        return (0); // Return 0 if the stack is empty

    max_value = stack->value;  // Initialize max_value with the first element

    stack = stack->next;  // Move to the next element

    while (stack)  // Traverse the rest of the stack
    {
        if (stack->value > max_value)
            max_value = stack->value;  // Update max_value if a larger value is found
        stack = stack->next;  // Move to the next element
    }

    return max_value;
}
