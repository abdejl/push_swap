#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/libft.h"  // Assuming you're using a custom libft library

// Define the structure for the linked list
// typedef struct s_list
// {
//     int index;
//     int value;
//     struct s_list *next;
// } t_list;

// Function Prototypes

// Utility Functions

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

void print_stack(t_list *stack);
int calculate_cost(t_list *stack_a, t_list *stack_b, int value);
int get_target_position(t_list *stack, int value);

// Stack Operations
int pa(t_list **stack_a, t_list **stack_b);
int pb(t_list **stack_a, t_list **stack_b);
int ra(t_list **stack_a);
int rb(t_list **stack_b);
int rr(t_list **stack_a, t_list **stack_b);
int rra(t_list **stack_a);
int rrb(t_list **stack_b);
int rrr(t_list **stack_a, t_list **stack_b);
int sa(t_list **stack_a);
int sb(t_list **stack_b);
int ss(t_list **stack_a, t_list **stack_b);
void swap(t_list **stack);
void rotate(t_list **stack);

// Sorting Functions
void sort_small_stack(t_list **stack_a);
void sort_large_stack(t_list **stack_a, t_list **stack_b);

// Utility Functions
t_list *create_node(int value);
void free_stack(t_list *stack);
int is_valid_number(char *str);
int has_duplicates(t_list *stack);
int find_min(t_list *stack);
int find_max(t_list *stack);
int is_sorted(t_list *stack);
void push_to_sorted_stack(t_list **source_stack, t_list **dest_stack);

// Input Parsing Functions
t_list *parse_input(int argc, char **argv);
int init_stack(t_list **stack_a, t_list **stack_b);

#endif
