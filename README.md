*This project has been created as part of the 42 curriculum by <kaogawa>*

## Description

Libft is a foundational C library project from the 42 curriculum that implements standard C library functions from scratch. This project serves as a learning tool to understand how essential library functions work at a low level.

The library consists of three parts:
- **Part 1 - Libc Functions**: Re-implementation of essential C standard library functions including character classification, string manipulation, and memory operations.
- **Part 2 - Additional Functions**: Extended string processing functions, character mapping with callbacks, and file descriptor-based output operations.
- **Part 3 - Linked Lists**: Custom implementation of a generic linked list data structure with various operations (add, remove, iterate, map).

## Instructions

### Building the Library

```bash
make        # Compile the library and generate libft.a
make clean  # Remove all object files (.o)
make fclean # Remove object files and libft.a
make re     # Full re-compilation (fclean + make)
```

### Usage

To use this library in your C projects:

1. Include the header file:
   ```c
   #include "libft.h"
   ```

2. Compile your program with libft.a:
   ```bash
   gcc -Wall -Wextra -Werror main.c libft.a -o my_program
   ```

## Library Details

### Part 1 - Libc Functions (23 functions)

Character classification:
- `ft_isalpha` - Check if character is alphabetic
- `ft_isdigit` - Check if character is a digit
- `ft_isalnum` - Check if character is alphanumeric
- `ft_isascii` - Check if character is ASCII
- `ft_isprint` - Check if character is printable

Character conversion:
- `ft_toupper` - Convert character to uppercase
- `ft_tolower` - Convert character to lowercase

String operations:
- `ft_strlen` - Get string length
- `ft_strchr` - Find first occurrence of character
- `ft_strrchr` - Find last occurrence of character
- `ft_strncmp` - Compare strings (up to n characters)
- `ft_strnstr` - Find substring within string (up to n characters)
- `ft_strlcpy` - Copy string with size limitation
- `ft_strlcat` - Concatenate strings with size limitation

Memory operations:
- `ft_memset` - Fill memory with a value
- `ft_memcpy` - Copy memory area
- `ft_memmove` - Copy memory area (handles overlaps)
- `ft_memchr` - Search for byte in memory
- `ft_memcmp` - Compare memory areas
- `ft_bzero` - Zero-fill memory area

Dynamic allocation:
- `ft_calloc` - Allocate and zero-initialize memory
- `ft_strdup` - Duplicate a string
- `ft_atoi` - Convert string to integer

### Part 2 - Additional Functions (11 functions)

String manipulation:
- `ft_substr` - Extract substring from string
- `ft_strjoin` - Concatenate two strings into new string
- `ft_strtrim` - Remove characters from both ends of string
- `ft_split` - Split string by delimiter into array
- `ft_itoa` - Convert integer to string representation

Iteration functions:
- `ft_strmapi` - Apply function to each character (creates new string)
- `ft_striteri` - Apply function to each character (in-place)

File descriptor output:
- `ft_putchar_fd` - Write character to file descriptor
- `ft_putstr_fd` - Write string to file descriptor
- `ft_putendl_fd` - Write string with newline to file descriptor
- `ft_putnbr_fd` - Write integer to file descriptor

### Part 3 - Linked List Functions (9 functions)

List creation and manipulation:
- `ft_lstnew` - Create a new list node
- `ft_lstadd_front` - Add node at the beginning of list
- `ft_lstadd_back` - Add node at the end of list
- `ft_lstlast` - Get the last node of list
- `ft_lstsize` - Get the number of nodes in list

List operations:
- `ft_lstdelone` - Delete a single node
- `ft_lstclear` - Delete entire list
- `ft_lstiter` - Iterate through list and apply function
- `ft_lstmap` - Create new list by applying function to each node

## Resources

### Documentation
- [Man7.org](https://man7.org/linux/man-pages/index.html) - Linux manual pages for standard C functions

### Useful Links
- [42 Docs](https://harm-smits.github.io/42docs/) - Unofficial documentation for 42 projects
- [ASCII Table](https://www.asciitable.com/) - Quick reference for character encoding
