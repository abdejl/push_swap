#include "push_swap.h"

// Function to pop an element from the stack
int pop_from_stack(t_node **stack)
{
    t_node *temp;
    int value;

    if (!*stack)
    {
        return (0); // Stack is empty, nothing to pop
    }

    // Store the value of the top node to return it later
    value = (*stack)->value;

    // Temporarily hold the top element (to free later)
    temp = *stack;

    // Move the stack pointer to the next element
    *stack = (*stack)->next;

    // Free the memory of the previous top node
    free(temp);

    return (value); // Return the value of the popped element
}
