#include "push_swap.h"

void push(t_node **dest, t_node **src)
{
    if (!src || !(*src)) 
        return; // Do nothing if source stack is empty

    t_node *temp = *src; // Store the top element of src
    *src = (*src)->next; // Move src's head to the next element
    temp->next = *dest;  // Attach src's old top to dest
    *dest = temp;        // Update dest's head to new top element
}

void rotate(t_node **stack)
{
    if (!stack || !(*stack) || !((*stack)->next))
        return; // Do nothing if stack is empty or has only one element

    t_node *first = *stack;
    t_node *last = *stack;

    // Find the last node
    while (last->next)
        last = last->next;

    *stack = first->next; // Update head to second element
    first->next = NULL;   // Detach first node
    last->next = first;   // Move first node to the end
}

void swap(t_node **stack)
{
    if (!stack || !(*stack) || !((*stack)->next))
        return;

    t_node *first = *stack;
    t_node *second = first->next;
    first->next = second->next;
    second->next = first;
    *stack = second; 
}
void reverse_rotate(t_node **stack)
{
    if (!stack || !(*stack) || !((*stack)->next))
        return; // Do nothing if stack is empty or has only one element

    t_node *prev = NULL;
    t_node *last = *stack;

    // Traverse to the last node while keeping track of the previous node
    while (last->next)
    {
        prev = last;
        last = last->next;
    }

    prev->next = NULL;  // Remove last node from the end
    last->next = *stack; // Move last node to the top
    *stack = last; // Update head pointer
}
