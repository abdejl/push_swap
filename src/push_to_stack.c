#include "push_swap.h"

// Function to push an element onto a stack
void push_to_stack(t_list **stack, int value)
{
    t_list *new_node;

    // Create a new node with the given value
    new_node = create_node(value);
    if (!new_node)
    {
        ft_putstr("Error\n");  // If memory allocation fails, print an error message
        return;
    }

    // Insert the new node at the beginning of the stack (top of the stack)
    new_node->next = *stack;
    *stack = new_node;
}
