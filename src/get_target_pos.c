#include "push_swap.h"

// Function to get the target position of an element in the other stack
int get_target_position(t_list *stack, int value)
{
    int position = 0;
    t_list *current = stack;

    // Traverse the stack to find the position of the value
    while (current)
    {
        if (current->value == value)
            return position;  // Return the position if the element is found
        position++;
        current = current->next;
    }

    return -1;  // Return -1 if the element is not found
}
