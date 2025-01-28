#include "push_swap.h"

void print_stacks(t_list *stack_a, t_list *stack_b)
{
    printf("Stack A: ");
    while (stack_a)
    {
        printf("%d ", stack_a->value);
        stack_a = stack_a->next;
    }
    printf("\nStack B: ");
    while (stack_b)
    {
        printf("%d ", stack_b->value);
        stack_b = stack_b->next;
    }
    printf("\n");
}
