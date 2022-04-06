

# Push_swap
*Because Swap_push isn’t as natural*

### Table of Contents
* **About the project**
* * [Introduction](#introduction)
* * [All Event](#all-event)
* * [Error ](#error )
* * [Results ](#results)
* **Usage**
* * [Requirements](#requirements)
* * [Instructions](#instructions)
* [**Goals**](#goals)
* [**Skills**](#skills)

## About the project

### Introduction

This project is all about sorting algorithms, but with a twist. We are given two stacks (`a`  and  `b`) and we must do some transformations on them so that all the numbers are sorted in  `a`  such that the top element is the smallest. We must compile an executable  `push_swap`  which will receive as an argument either several integer arguments or one large argument with the different numbers in quotes.

### All Event

Here are all the possible rotations we can do to help sort our stacks:

| Instruction | Description |
| -- | -- |
| `sa` | Swaps the first two elements in stack  `a` |
| `sb` | Swaps the first two elements in stack  `b` |
| `ss` | Performs  `sa`  and  `sb`  simultaneously |
| `ra` | Rotates all elements upwards so that the first element of  `a`  goes to the bottom of the stack |
| `rb` | Rotates all elements upwards so that the first element of  `b`  goes to the bottom of the stack |
| `rr` | Performs  `ra`  and  `rb`  simultaneously |
| `rra` | Rotates all elements downwards so that the last element of  `a`  goes to the top of the stack |
| `rrb` | Rotates all elements downwards so that the last element of  `b`  goes to the top of the stack |
| `rrr` | Performs  `rra`  and  `rrb`  simultaneously |

### Error 

As with other projects, we must verify a few errors, namely:

-   A number cannot be repeated in the stack
-   All parameters must be integers, thus no characters will be accepted
-   All numbers must be integers, numbers out of this scope will throw an error

If any of these checks fail, the program must end with  `Error\n`.

Here's an example input:

```
❯ ./exe "3 4 1 2 6"

The stack should look like this:

3		.		
4		.		
1		.		
2		.		
6		.		
----------	----------
a		b


```

And here are some incorrect inputs:
```
❯ ./exe 3 4 1 2 3
Error

❯ ./exe 3 4 1 2 six
Error

❯ ./exe 3 4 1 2 2147483648
Error
```

### Results

Once everything has been checked, the program must print out a proposed set of instructions to sort the given numbers in the least number of steps, for example:
```
❯ ./exe 2 1 0
sa
rra
```

## Usage

### Requirements

The function is written in C language and thus needs the  **`gcc`  compiler**  and some standard  **C libraries**  to run.

### Instructions

**Cloning the repositories**

```shell
git clone https://github.com/Nera-tv/push_swap.git push_swap
make
```


 ## Goals:

- Sorting algorithms  
- Battery concept and handling elements  
- Algorithm implementation

## Skills:

- Imperative programming  
- Rigor  
- Unix  
- Algorithms & AI

### [Go back](https://github.com/Neress-dono/common-core_42)
