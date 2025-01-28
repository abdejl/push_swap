#include "push_swap.h"

// Function to print the elements of a stack (for debugging purposes)
void print_stack(t_list *stack)
{
    while (stack)
    {
        ft_putnbr(stack->value);  // Assuming you have a function to print numbers
        ft_putstr(" ");  // Print space between numbers
        stack = stack->next;  // Move to the next element
    }
    ft_putstr("\n");  // Print a newline after the stack
}
