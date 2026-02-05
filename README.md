*This project has been created as part of the 42 curriculum by bakumcu.*

# LIBFT

## Description

In short, **libft** is the foundational project at **42** that tasks you with building your own custom C library. Since C doesn’t provide the high-level shortcuts found in modern languages, you have to code your own tools for handling memory, strings, and data.

By recreating these standard functions from scratch, you gain a deep understanding of how they work under the hood while adhering to rigorous coding standards. This personal library then becomes your go-to toolkit for more complex projects later in the curriculum.

## Library Overview

### Part 1 - Libc Functions

These functions replicate the behavior of their standard library (libc):

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character is an ASCII character |
| `ft_isprint` | Checks if a character is printable |
| `ft_strlen` | Calculates the length of a string |
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Sets all bytes in a memory area to zero |
| `ft_memcpy` | Copies memory area |
| `ft_memmove` | Copies memory area (handles overlapping) |
| `ft_strlcpy` | Copies string with size limitation |
| `ft_strlcat` | Concatenates strings with size limitation |
| `ft_toupper` | Converts character to uppercase |
| `ft_tolower` | Converts character to lowercase |
| `ft_strchr` | Locates first occurrence of character in string |
| `ft_strrchr` | Locates last occurrence of character in string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_memchr` | Locates byte in memory area |
| `ft_memcmp` | Compares memory areas |
| `ft_strnstr` | Locates substring in string with length limit |
| `ft_atoi` | Converts string to integer |
| `ft_calloc` | Allocates and zeros memory |
| `ft_strdup` | Duplicates a string |

### Part 2 - Additional Functions

Custom utility functions not found in the standard library:

| Function | Description |
|----------|-------------|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims specified characters from beginning and end |
| `ft_split` | Splits a string by a delimiter into an array |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character of a string |
| `ft_striteri` | Applies a function to each character with its index |
| `ft_putchar_fd` | Outputs a character to a file descriptor |
| `ft_putstr_fd` | Outputs a string to a file descriptor |
| `ft_putendl_fd` | Outputs a string with newline to a file descriptor |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor |

### Part 3 - Linked List Functions

While memory and string manipulation are foundational, linked lists provide a more flexible approach to data management. This section implements functions to manipulate lists using the t_list structure defined below:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
```

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstsize` | Counts the number of nodes in the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstdelone` | Deletes a single node |
| `ft_lstclear` | Deletes and frees all nodes |
| `ft_lstiter` | Applies a function to each node's content |
| `ft_lstmap` | Creates a new list by applying a function to each node |

## Instructions

### Requirements

- GCC compiler
- Make
- Unix-based operating system (Linux/macOS)

### Compilation and Make Commands

| Command | Description |
|---------|-------------|
| `make` or `make all` | Compiles the library |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and the library |
| `make re` | Recompiles the library from scratch |

### Usage

To use this libft library in your project:

1. Include the header file in your source code:
   ```c
   #include "libft.h"
   ```

2. Compile your program with the library:
   ```bash
   cc -Wall -Wextra -Werror your_program.c libft.a -o program
   ```

## Resources

### Documentation & References
- 42 Cursus Libft Subject - for official project documentation details
- [The C Programming Language (K&R)](https://en.wikipedia.org/wiki/The_C_Programming_Language) - Classic C reference book
- [bilgigunlugum.net - C Programming](https://bilgigunlugum.net/prog/cprog/c_proggiris) - Details and function prototypes
- [GNU C Library Manual](https://www.gnu.org/software/libc/manual/) - Official libc documentation
- [man7.org](https://man7.org/linux/man-pages/) - Linux manual pages
- [cppreference.com - C Reference](https://en.cppreference.com/w/c) - Detailed C function documentation


### AI Usage

While developing this project, I used AI tools as a supplemental learning resource. My goal was to treat AI like a mentor—using it to clarify the logic behind complex behaviors (such as memory overlap in memmove) or to double-check my understanding of pointer arithmetic and linked lists.

Specifically, AI was used to:
* Understand the complex behaviors and edge cases of standard library functions.
* Clarify concepts related to memory management and linked list data structures.


No code was copy-pasted. Every line of logic was written, debugged, and tested by me to ensure I fully grasp the underlying C concepts required by the 42 curriculum.

---

**Author:** bakumcu@student.42istanbul.com.tr