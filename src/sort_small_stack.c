#include "push_swap.h"

// Function to sort a small stack (3 to 5 elements)
void sort_small_stack(t_node **stack_a, t_node **stack_b)
{
    int size = ft_lstsize(*stack_a);  // Get the size of the stack

    // Handle sorting based on the number of elements in the stack
    if (size == 2)
        sa(stack_a);  // Swap if only two elements (simple swap)
    else if (size == 3)
        sort_three(stack_a);  // Handle sorting for 3 elements
    else if (size == 4)
        sort_four(stack_a, stack_b);  // Handle sorting for 4 elements
    else if (size == 5)
        sort_five(stack_a, stack_b);  // Handle sorting for 5 elements
}

// Function to sort 3 elements using insertion sort
void sort_three(t_node **stack_a)
{
    int first = (*stack_a)->value;
    int second = (*stack_a)->next->value;
    int third = (*stack_a)->next->next->value;

    if (first > second && second < third && first < third)
        sa(stack_a);  // Swap first and second if needed
    else if (first > second && second > third)
    {
        sa(stack_a);
        rra(stack_a);  // Reverse rotate to get the correct order
    }
    else if (first > second && first > third && second < third)
        ra(stack_a);  // Rotate to get the correct order
    else if (second > third && first < second)
        rra(stack_a);  // Reverse rotate
    else if (first > third)
        sa(stack_a);  // Swap first and second
}

// Function to sort 4 elements
void sort_four(t_node **stack_a, t_node **stack_b)
{
    // Push the smallest element to stack B
    pb(stack_a, stack_b);
    sort_three(stack_a);  // Sort the remaining 3 elements in stack A
    pa(stack_a, stack_b);  // Push the smallest element back to stack A
}

// Function to sort 5 elements
void sort_five(t_node **stack_a, t_node **stack_b)
{
    // Push the two smallest elements to stack B
    pb(stack_a, stack_b);
    pb(stack_a, stack_b);
    sort_three(stack_a);  // Sort the remaining 3 elements in stack A
    pa(stack_a, stack_b);  // Push the smallest element back to stack A
    pa(stack_a, stack_b);  // Push the second smallest element back to stack A
}
