#include "push_swap.h"

// Function to calculate the "cost" of an operation
int calculate_cost(t_list *stack_a, t_list *stack_b, int value)
{
    int cost = 0;
    t_list *current = stack_a;

    // Find the cost for moving the element to the correct position in stack_a
    while (current)
    {
        if (current->value == value)
            break;  // Stop when the element is found
        cost++;
        current = current->next;
    }

    // Find the cost for moving the element to the correct position in stack_b
    current = stack_b;
    while (current)
    {
        if (current->value == value)
            break;  // Stop when the element is found
        cost++;
        current = current->next;
    }

    return cost;  // Return the total cost
}
