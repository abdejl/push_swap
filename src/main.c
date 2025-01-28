#include "push_swap.h"

/* is_sorted:
*   Checks if a stack is sorted.
*   Returns 0 if the stack is not sorted, 1 if it is sorted.
*/
int is_sorted(t_list *stack)
{
    while (stack && stack->next)
    {
        if (stack->value > stack->next->value)
            return (0);
        stack = stack->next;
    }
    return (1);
}

/* push_swap:
*   Chooses a sorting method depending on the number of values to be sorted.
*/
static void push_swap(t_list **stack_a, t_list **stack_b, int stack_size)
{
    if (stack_size == 2 && !is_sorted(*stack_a))
        sa(stack_a);  // If there are 2 elements and it's not sorted, swap
    else if (stack_size == 3)
        sort_small_stack(stack_a);  // For 3 elements, use small stack sort
    else if (stack_size > 3 && !is_sorted(*stack_a))
        sort_large_stack(stack_a, stack_b);  // For larger stacks, use efficient sort
}

/* main:
*   Checks if the input is correct, initializes stacks a and b,
*   assigns each value indexes, and sorts the stacks. 
*   When sorting is done, it frees the stacks and exits.
*/
int main(int argc, char **argv)
{
    t_list *stack_a;
    t_list *stack_b;
    int stack_size;

    if (argc < 2)
        return (0);  // Exit if no arguments are passed

    // Parse input and fill stack_a with the values
    stack_a = parse_input(argc, argv);
    if (!stack_a)
    {
        ft_putstr("Error\n");
        return (1);
    }

    // Initialize stack_b to NULL (empty stack)
    stack_b = NULL;
    stack_size = ft_lstsize(stack_a);  // Get the size of stack_a

    // Sort the stack based on the size
    push_swap(&stack_a, &stack_b, stack_size);

    // Print the final sorted stack for debugging (optional)
    // ft_putstr("Sorted stack A: ");
    // print_stack(stack_a);

    // Free the allocated memory for both stacks
    free_stack(stack_a);
    free_stack(stack_b);

    return (0);
}
