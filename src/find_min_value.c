#include "push_swap.h"

// Function to find the minimum value in a stack
int find_min(t_list *stack)
{
    int min_value;
    
    if (!stack)
        return (0); // Return 0 if the stack is empty

    min_value = stack->value;  // Initialize min_value with the first element

    stack = stack->next;  // Move to the next element

    while (stack)  // Traverse the rest of the stack
    {
        if (stack->value < min_value)
            min_value = stack->value;  // Update min_value if a smaller value is found
        stack = stack->next;  // Move to the next element
    }

    return min_value;
}
