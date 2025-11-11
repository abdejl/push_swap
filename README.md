# push_swap (42 School Project)

<p align="center">
  <img src="https://github.com/42-world/42-badges/blob/main/badges/push_swap_full.png" alt="42 push_swap Project Badge" width="400" />
</p>

<p align="center">
  <strong>An algorithm-intensive project to sort data with a limited set of operations.</strong>
  <br />
  This project challenges you to sort a stack of numbers in the fewest possible moves,
  <br />
  using only two stacks (A and B) and a specific set of instructions.
</p>

---

## Overview

`push_swap` is a core algorithm project at 42. The goal is to write a program that takes a list of integers as arguments and generates the shortest sequence of instructions to sort these integers, with the smallest number at the top of stack A.

The challenge lies in the constraints:
* You have two stacks, **A** (which initially holds the numbers) and **B** (which is initially empty).
* You can only use a specific, limited set of 11 operations to manipulate the stacks.
* The final sorting algorithm must be efficient, aiming for the lowest possible instruction count.

This project is a deep dive into algorithmic thinking, optimization, and data structure manipulation.

## The Instructions

The core of the project is to generate a list of the following operations:

| Operation | Description |
| :--- | :--- |
| `sa` | **swap a**: Swap the first 2 elements at the top of stack A. |
| `sb` | **swap b**: Swap the first 2 elements at the top of stack B. |
| `ss` | `sa` and `sb` at the same time. |
| `pa` | **push a**: Take the first element at the top of B and put it at the top of A. |
| `pb` | **push b**: Take the first element at the top of A and put it at the top of B. |
| `ra` | **rotate a**: Shift up all elements of stack A by 1. The first element becomes the last. |
| `rb` | **rotate b**: Shift up all elements of stack B by 1. The first element becomes the last. |
| `rr` | `ra` and `rb` at the same time. |
| `rra` | **reverse rotate a**: Shift down all elements of stack A by 1. The last element becomes the first. |
| `rrb` | **reverse rotate b**: Shift down all elements of stack B by 1. The last element becomes the first. |
| `rrr` | `rra` and `rrb` at the same time. |

## The Sorting Algorithm

The primary challenge is to create an efficient sorting algorithm that can handle various input sizes with a low number of moves. This typically involves:

* **Handling Small Stacks:** A simple, hard-coded solution for sorting 3 or 5 numbers.
* **Main Algorithm:** A more complex algorithm for larger stacks. A common and efficient approach involves:
    1.  Pushing elements from stack A to stack B in an organized way (e.g., pushing in chunks, or based on proximity to a median).
    2.  Calculating the cheapest move to insert each element from A into its sorted position in B.
    3.  Once all elements are in stack B (or most of them), pushing them back to stack A in the correct order.

This repository implements an efficient algorithm to sort the stack, optimized to minimize the total number of operations.

## The `checker` Program

This repository also includes a `checker` program, which is used to verify the output of `push_swap`.

* The `checker` program takes the same list of numbers as its arguments.
* It then reads instructions from the standard input (one per line).
* It performs these instructions on the stack.
* After reading all instructions, it checks if stack A is sorted and stack B is empty.
* It will output **"OK"** if the stack is sorted correctly, or **"KO"** if it is not.

## Getting Started

### Installation

1.  **Clone the repository:**
    ```sh
    git clone [https://github.com/abdejl/push_swap.git](https://github.com/abdejl/push_swap.git)
    ```

2.  **Navigate to the project directory:**
    ```sh
    cd push_swap
    ```

3.  **Compile the project:**
    * This will create two executables: `push_swap` and `checker`.
    ```sh
    make
    ```

## Usage

To test the program, you need to generate a list of numbers and pipe the output of `push_swap` into the `checker`.

### Example

1.  **Generate a list of random numbers.** You can use a simple script or just type them manually.
    ```sh
    # Example with 5 numbers
    ARG="4 67 3 2 1"
    ```
    *(For more complex testing, try using 100 or 500 numbers)*

2.  **Run `push_swap` with the list.** This will print the sorting instructions.
    ```sh
    ./push_swap $ARG
    ```
    *Example output:*
    ```
    pb
    pb
    sa
    pa
    pa
    ```

3.  **Verify the output with `checker`.** The most common way is to use a pipe (`|`):
    ```sh
    ./push_swap $ARG | ./checker $ARG
    ```
    *If successful, the `checker` will output:*
    ```
    OK
    ```

4.  **To see the instruction count,** you can pipe to `wc -l`:
    ```sh
    ./push_swap $ARG | wc -l
    ```

## Author

* **[Your Name]** - [abdejl](https://github.com/abdejl)
