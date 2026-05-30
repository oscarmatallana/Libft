*This project has been created as part of the 42 curriculum by omatalla.*

# Libft

## Description

Libft is the first project of the 42 Core Curriculum. Its objective is to recreate a subset of the standard C library functions and implement additional utility functions that will be used as building blocks throughout future projects.

The project provides practical experience with fundamental programming concepts in C, including:

* Memory management
* Pointers and pointer arithmetic
* Strings and arrays
* Dynamic memory allocation
* Static libraries
* Makefiles and build automation
* Generic data structures using linked lists

The final result is a custom static library, `libft.a`, containing 43 reusable functions that can be linked into future C projects.

## Project Goals

The purpose of Libft is to:

* Develop a deeper understanding of how common C library functions work internally.
* Learn how memory is allocated, manipulated and released.
* Practice writing robust and reusable code.
* Build a personal library that can be reused throughout the 42 curriculum.
* Gain experience creating and managing static libraries.

## Skills Acquired

Through this project I practiced:

- C programming fundamentals
- Pointer arithmetic
- Dynamic memory management
- Static library creation
- Makefile development
- Linked list implementation
- Defensive programming
- Memory leak prevention
- API design and code reuse

## Features

The library is divided into three parts:

1. Re-implementation of standard C library functions.
2. Additional utility functions for string manipulation and output.
3. Linked list functions based on a custom generic list structure.

| Part | Category | Functions |
|------|----------|----------:|
| Part 1 | Standard C Library Functions | 23 |
| Part 2 | Additional Utility Functions | 11 |
| Part 3 | Linked List Functions | 9 |
| **Total** | | **43** |

These 43 functions form the foundation library that will be reused throughout subsequent projects in the 42 curriculum.

## What is `libft.a`?

`libft.a` is a static library generated from the source files of this project.

A static library is an archive file containing compiled object files (`.o`) that can be linked into another program during compilation.

Using a static library allows you to:

* Reuse code across multiple projects.
* Reduce repetitive compilation.
* Organize related functionality into a single library.
* Build a reusable personal C library.

## Repository

Clone the repository using:

```bash
git clone https://github.com/oscarmatallana/Libft.git
cd Libft
```

## Instructions

### Build the library

Compile the entire library:

```bash
make
```

This generates:

```text
libft.a
```

### Remove object files

```bash
make clean
```

### Remove object files and library

```bash
make fclean
```

### Rebuild everything

```bash
make re
```

## Usage Example

Include the header file in your project:

```c
#include "libft.h"
```

Compile your program together with the library:

```bash
cc main.c libft.a
```

Example:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
	printf("%zu\n", ft_strlen("Hello, world!"));
	return (0);
}
```

## Linked List Structure

Part 3 of the project introduces a generic singly linked list implementation using the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

### Structure Members

* `content` — Pointer to the data stored in the node.
* `next` — Pointer to the next node in the list, or `NULL` if the node is the last element.

Using `void *content` allows the list to store data of any type.

## Library Reference

### Part 1 — Standard C Library Functions (23 Functions)

| Function     | Description                                            |
| ------------ | ------------------------------------------------------ |
| `ft_isalpha` | Checks whether a character is alphabetic.              |
| `ft_isdigit` | Checks whether a character is numeric.                 |
| `ft_isalnum` | Checks whether a character is alphanumeric.            |
| `ft_isascii` | Checks whether a value belongs to the ASCII table.     |
| `ft_isprint` | Checks whether a character is printable.               |
| `ft_strlen`  | Returns the length of a string.                        |
| `ft_memset`  | Fills a memory area with a constant byte.              |
| `ft_bzero`   | Sets a memory area to zero.                            |
| `ft_memcpy`  | Copies memory from one location to another.            |
| `ft_memmove` | Copies memory safely, including overlapping regions.   |
| `ft_strlcpy` | Copies a string with size protection.                  |
| `ft_strlcat` | Appends one string to another with size protection.    |
| `ft_toupper` | Converts a lowercase character to uppercase.           |
| `ft_tolower` | Converts an uppercase character to lowercase.          |
| `ft_strchr`  | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string.  |
| `ft_strncmp` | Compares two strings up to a specified length.         |
| `ft_memchr`  | Searches memory for a specific byte.                   |
| `ft_memcmp`  | Compares two memory areas.                             |
| `ft_strnstr` | Searches for a substring within a limited length.      |
| `ft_atoi`    | Converts a string to an integer.                       |
| `ft_calloc`  | Allocates and zero-initializes memory.                 |
| `ft_strdup`  | Creates a duplicate of a string.                       |

### Part 2 — Additional Utility Functions (11 Functions)

| Function        | Description                                                                |
| --------------- | -------------------------------------------------------------------------- |
| `ft_substr`     | Extracts a substring from a string.                                        |
| `ft_strjoin`    | Concatenates two strings into a new string.                                |
| `ft_strtrim`    | Removes specified characters from the beginning and end of a string.       |
| `ft_split`      | Splits a string using a delimiter character.                               |
| `ft_itoa`       | Converts an integer to a string.                                           |
| `ft_strmapi`    | Applies a function to each character of a string and returns a new string. |
| `ft_striteri`   | Applies a function to each character of a string in place.                 |
| `ft_putchar_fd` | Writes a character to a file descriptor.                                   |
| `ft_putstr_fd`  | Writes a string to a file descriptor.                                      |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor.                |
| `ft_putnbr_fd`  | Writes an integer to a file descriptor.                                    |

### Part 3 — Linked List Functions (9 Functions)

| Function          | Description                                                        |
| ----------------- | ------------------------------------------------------------------ |
| `ft_lstnew`       | Creates a new list node.                                           |
| `ft_lstadd_front` | Inserts a node at the beginning of a list.                         |
| `ft_lstsize`      | Counts the number of nodes in a list.                              |
| `ft_lstlast`      | Returns the last node of a list.                                   |
| `ft_lstadd_back`  | Appends a node to the end of a list.                               |
| `ft_lstdelone`    | Deletes a single node using a provided delete function.            |
| `ft_lstclear`     | Deletes and frees an entire list.                                  |
| `ft_lstiter`      | Applies a function to every node's content.                        |
| `ft_lstmap`       | Creates a new list by applying a function to every node's content. |

## Testing

The library was tested using both custom test programs and community-maintained Libft testers.

### Recommended Testers

* https://github.com/0x050f/libft-war-machine
* https://github.com/jtoty/Libftest
* https://github.com/adrossig/libft_tester
* https://github.com/Tripouille/libftTester
* https://github.com/Nuno-Jesus/libft_file_checker

## Resources

### Documentation

* Linux Manual Pages (`man`)
* The C Programming Language — Brian Kernighan & Dennis Ritchie
* GNU Make Documentation: https://www.gnu.org/software/make/manual/make.html
* GeeksforGeeks — Static Libraries in C
* GeeksforGeeks — Linked Lists in C
* W3Schools — C Pointers

### Useful Learning Resources

* https://www.geeksforgeeks.org/c/how-to-create-a-static-library-in-c/
* https://www.geeksforgeeks.org/c/c-pointers/
* https://www.geeksforgeeks.org/c/linked-list-in-c/
* https://pythontutor.com

### AI Usage

AI tools were used as supplementary learning resources during the development of this project.

The AI was primarily used for:

* Understanding the behavior of standard C library functions.
* Clarifying concepts related to pointers and memory management.
* Exploring linked list operations and data structures.
* Reviewing algorithms and discussing edge cases.
* Improving project documentation and explanations.

All source code, implementations, debugging, compilation, testing, and final project decisions were completed and validated by the author.

## Author

**Oscar Matallana**
42 Berlin — `omatalla`
Email: omatalla@student.42berlin.de
GitHub: https://github.com/oscarmatallana

