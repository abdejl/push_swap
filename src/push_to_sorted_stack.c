#include "push_swap.h"

// Function to push an element to a sorted stack
void push_to_sorted_stack(t_node **source_stack, t_node **dest_stack)
{
    t_node *temp;
    
    if (!*source_stack)  // If the source stack is empty, nothing to do
        return;
    
    temp = *source_stack;  // Get the first element of the source stack
    *source_stack = (*source_stack)->next;  // Move the head of the source stack to the next element

    // Insert the element in the correct position in the destination stack
    if (!*dest_stack || (*dest_stack)->value >= temp->value)  // If the destination stack is empty or the element should be placed at the top
    {
        temp->next = *dest_stack;
        *dest_stack = temp;
    }
    else
    {
        t_list *current = *dest_stack;
        // Find the correct position to insert the element in the sorted order
        while (current->next && current->next->value < temp->value)
            current = current->next;

        temp->next = current->next;
        current->next = temp;
    }
}
