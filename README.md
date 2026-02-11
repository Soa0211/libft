*This project has been created as part of the 42 curriculum by miavrako.*

## Description

**Libft** is the foundational project of the 42 School curriculum, where students build their own implementation of the C standard library along with additional utility functions. This project serves as the cornerstone for all future C projects at 42, providing a deep understanding of fundamental programming concepts, memory management, and low-level implementations of commonly used functions.

The primary objective of Libft is to:
- Re-implement essential functions from the C standard library (`libc`)
- Create additional utility functions for string manipulation and memory management
- Develop a comprehensive understanding of pointers, memory allocation, and data structures
- Build a reusable library that will serve as a foundation for subsequent 42 projects
- Master strict coding standards (42 Norm) and defensive programming practices

The project is divided into three main parts:

1. **Part 1 - Libc Functions**: Re-implementation of standard C library functions including character checks (`isalpha`, `isdigit`), string manipulation (`strlen`, `strchr`, `strdup`), memory operations (`memset`, `memcpy`, `memmove`), and conversions (`atoi`, `toupper`, `tolower`).

2. **Part 2 - Additional Functions**: Creation of utility functions not present in the standard library but extremely useful for string processing, such as `ft_substr` (substring extraction), `ft_split` (string tokenization), `ft_strtrim` (character trimming), `ft_itoa` (integer to string conversion), and various output functions with file descriptor support.

3. **Part 3 - Linked Lists**: Implementation of a simple linked list data structure with functions for creation, manipulation, iteration, and deletion of list elements.

The final deliverable is a static library (`libft.a`) that can be linked with any C project, providing a comprehensive toolkit of reliable, tested functions.

---

## Instructions

### Prerequisites

- CC compiler
- Make
- Linux/Unix environment or WSL (Windows Subsystem for Linux)

### Compilation

Clone the repository and navigate to the project directory:

```bash
git clone <your-repository-url> libft
cd libft
```

Compile the library using the provided Makefile:

```bash
make                # Compiles the mandatory part (libft.a)
make bonus          # Compiles with bonus functions included
make clean          # Removes object files (.o)
make fclean         # Removes object files and the library
make re             # Recompiles everything from scratch
```

### Installation

After compilation, the `libft.a` static library will be created in the project directory. To use it in your projects:

1. Include the header file in your source code:
```c
#include "libft.h"
```

2. Compile your project with the library:
```bash
cc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
```

Or copy `libft.a` and `libft.h` to your project directory and link accordingly.

### Execution

Example usage:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = ft_strdup("Hello, 42!");
    char *trimmed = ft_strtrim(str, " !");

    ft_putstr_fd(trimmed, 1);
    ft_putchar_fd('\n', 1);

    free(str);
    free(trimmed);
    return (0);
}
```

Compile and run:
```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o example
./example
```

### Testing

It is highly recommended to test your library with one or more of the following testers:

**Francinette** (Recommended):
```bash
git clone https://github.com/xicodomingues/francinette.git ~/.francinette
cd ~/.francinette
bash bin/install.sh
cd ~/libft
paco
```

**Other Testers**:
- [libft-unit-test](https://github.com/alelievr/libft-unit-test)
- [libftTester](https://github.com/Tripouille/libftTester)
- [War Machine](https://github.com/0x050f/libft-war-machine)

**Memory Leak Testing**:
```bash
valgrind --leak-check=full --show-leak-kinds=all ./your_program
```

---

## Library Description

### Overview

The **libft** library is a comprehensive collection of 43+ functions organized into distinct categories. It provides implementations of standard C library functions along with custom utility functions designed to simplify common programming tasks.

### Function Categories

#### 1. Character Validation Functions (`<ctype.h>`)

These functions check various properties of characters:

| Function | Description | Return Value |
|----------|-------------|--------------|
| `ft_isalpha` | Checks if character is alphabetic (a-z, A-Z) | Non-zero if true, 0 otherwise |
| `ft_isdigit` | Checks if character is a digit (0-9) | Non-zero if true, 0 otherwise |
| `ft_isalnum` | Checks if character is alphanumeric | Non-zero if true, 0 otherwise |
| `ft_isascii` | Checks if character is in ASCII range (0-127) | Non-zero if true, 0 otherwise |
| `ft_isprint` | Checks if character is printable (32-126) | Non-zero if true, 0 otherwise |

#### 2. String Manipulation Functions (`<string.h>`)

Core string operations essential for text processing:

| Function | Description | Parameters |
|----------|-------------|------------|
| `ft_strlen` | Returns the length of a string | `const char *s` |
| `ft_strlcpy` | Safely copies string with size limit | `char *dst, const char *src, size_t size` |
| `ft_strlcat` | Safely concatenates strings with size limit | `char *dst, const char *src, size_t size` |
| `ft_strchr` | Locates first occurrence of character | `const char *s, int c` |
| `ft_strrchr` | Locates last occurrence of character | `const char *s, int c` |
| `ft_strncmp` | Compares two strings up to n bytes | `const char *s1, const char *s2, size_t n` |
| `ft_strnstr` | Locates substring in string with length limit | `const char *big, const char *little, size_t len` |
| `ft_strdup` | Duplicates a string (allocates memory) | `const char *s` |

#### 3. Memory Manipulation Functions (`<string.h>`)

Low-level memory operations:

| Function | Description | Parameters |
|----------|-------------|------------|
| `ft_memset` | Fills memory with constant byte | `void *s, int c, size_t n` |
| `ft_bzero` | Zeroes n bytes of memory | `void *s, size_t n` |
| `ft_memcpy` | Copies n bytes of memory | `void *dest, const void *src, size_t n` |
| `ft_memmove` | Copies memory handling overlaps | `void *dest, const void *src, size_t n` |
| `ft_memchr` | Scans memory for character | `const void *s, int c, size_t n` |
| `ft_memcmp` | Compares memory areas | `const void *s1, const void *s2, size_t n` |

#### 4. Conversion Functions

Character and string conversions:

| Function | Description | Parameters |
|----------|-------------|------------|
| `ft_atoi` | Converts string to integer | `const char *nptr` |
| `ft_itoa` | Converts integer to string (allocates) | `int n` |
| `ft_toupper` | Converts character to uppercase | `int c` |
| `ft_tolower` | Converts character to lowercase | `int c` |

#### 5. Memory Allocation

| Function | Description | Parameters |
|----------|-------------|------------|
| `ft_calloc` | Allocates and zeroes memory | `size_t nmemb, size_t size` |

#### 6. Additional String Functions (Part 2)

Advanced string manipulation utilities:

| Function | Description | Return | Parameters |
|----------|-------------|--------|------------|
| `ft_substr` | Extracts substring from string | `char *` | `char const *s, unsigned int start, size_t len` |
| `ft_strjoin` | Concatenates two strings into new string | `char *` | `char const *s1, char const *s2` |
| `ft_strtrim` | Trims specified characters from both ends | `char *` | `char const *s1, char const *set` |
| `ft_split` | Splits string into array using delimiter | `char **` | `char const *s, char c` |
| `ft_strmapi` | Applies function to each character (with index) | `char *` | `char const *s, char (*f)(unsigned int, char)` |
| `ft_striteri` | Iterates string applying function (void return) | `void` | `char *s, void (*f)(unsigned int, char*)` |

**ft_substr**: Creates a new string starting at `start` position with maximum length `len`. Handles edge cases where start exceeds string length.

**ft_strjoin**: Allocates memory for a new string containing the concatenation of `s1` and `s2`.

**ft_strtrim**: Removes all characters present in `set` from the beginning and end of `s1`. For example, `ft_strtrim("  hello  ", " ")` returns `"hello"`.

**ft_split**: Divides a string into an array of substrings using character `c` as delimiter. Returns a NULL-terminated array of strings. Memory is dynamically allocated.

**ft_strmapi**: Creates a new string by applying function `f` to each character, passing both the character's index and value.

**ft_striteri**: Similar to `ft_strmapi` but modifies the original string instead of creating a new one.

#### 7. File Descriptor Output Functions

Functions for writing to file descriptors (useful for stdout, stderr, or files):

| Function | Description | Parameters |
|----------|-------------|------------|
| `ft_putchar_fd` | Outputs character to file descriptor | `char c, int fd` |
| `ft_putstr_fd` | Outputs string to file descriptor | `char *s, int fd` |
| `ft_putendl_fd` | Outputs string + newline to fd | `char *s, int fd` |
| `ft_putnbr_fd` | Outputs integer to file descriptor | `int n, int fd` |

#### 8. Linked List Functions

Complete linked list implementation using the structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description | Parameters |
|----------|-------------|------------|
| `ft_lstnew` | Creates new list element | `void *content` |
| `ft_lstadd_front` | Adds element at list beginning | `t_list **lst, t_list *new` |
| `ft_lstsize` | Counts elements in list | `t_list *lst` |
| `ft_lstlast` | Returns last element of list | `t_list *lst` |
| `ft_lstadd_back` | Adds element at list end | `t_list **lst, t_list *new` |
| `ft_lstdelone` | Deletes single element with content | `t_list *lst, void (*del)(void*)` |
| `ft_lstclear` | Deletes all list elements | `t_list **lst, void (*del)(void*)` |
| `ft_lstiter` | Iterates list applying function | `t_list *lst, void (*f)(void *)` |
| `ft_lstmap` | Creates new list applying function | `t_list *lst, void *(*f)(void *), void (*del)(void *)` |

**ft_lstnew**: Allocates and initializes a new list node with the given content.

**ft_lstadd_front/back**: Insert nodes at the beginning or end of the list.

**ft_lstdelone**: Frees a single node using the provided deletion function for content.

**ft_lstclear**: Deletes and frees all nodes in the list.

**ft_lstiter**: Applies a function to the content of each node.

**ft_lstmap**: Creates a new list resulting from applying a function to each node's content, with proper error handling.

### Memory Management

All functions that allocate memory (`ft_calloc`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, and all `ft_lst*` functions) return `NULL` on allocation failure. Users must free allocated memory to prevent leaks.

### Error Handling

Functions follow these conventions:
- Return `NULL` for pointer functions on error or invalid input
- Return `-1` or `0` for integer functions on error (context-dependent)
- Protect against NULL pointer dereferences where applicable
- Handle edge cases (empty strings, zero sizes, boundary conditions)

## Technical Choices

### Design Decisions

**Static Library Format**: The project is delivered as a static library (`libft.a`) rather than a shared library. This choice ensures:
- Portability across different systems
- No runtime dependency issues
- Simpler compilation process for students
- Alignment with 42 pedagogical goals

**Function Naming Convention**: All functions are prefixed with `ft_` (Forty-Two) to:
- Avoid naming conflicts with standard library functions
- Clearly identify custom implementations
- Maintain consistency across the codebase


### Coding Standards

**42 Norm Compliance**: All code strictly adheres to the 42 Norm, including:
- Maximum 25 lines per function
- Maximum 80 characters per line
- Maximum 5 functions per file
- Prohibition of `for`, `switch`, `goto` statements
- Mandatory function prototypes in header file
- Specific indentation and formatting rules

**Error Handling Strategy**:
- Defensive programming with NULL checks on all pointer inputs
- Consistent return value conventions (NULL for errors in pointer functions)
- Protection against common pitfalls (integer overflow, buffer overflow)

**Memory Safety**:
- All allocated memory is freed in test programs
- Functions that allocate memory document this in their implementation
- Use of `size_t` for sizes to prevent negative size issues

---

## Resources

### Official Documentation

- [C Standard Library Reference](https://en.cppreference.com/w/c) - Comprehensive documentation of standard C functions
- [GNU C Library Manual](https://www.gnu.org/software/libc/manual/) - Detailed glibc documentation
- [Linux Man Pages](https://man7.org/linux/man-pages/) - System call and library function references
- [42 Norm PDF](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf) - Official 42 coding standards

### Articles and Tutorials

- [Understanding Pointers in C](https://boredzo.org/pointers/) - Visual guide to pointer concepts
- [Memory Management in C](https://www.learn-c.org/en/Dynamic_allocation) - malloc, free, and memory allocation
- [Linked Lists in C](https://www.geeksforgeeks.org/data-structures/linked-list/) - Comprehensive linked list tutorial
- [String Manipulation in C](https://www.programiz.com/c-programming/c-strings) - String handling fundamentals
- [Makefile Tutorial](https://makefiletutorial.com/) - Complete guide to Makefiles

### Testing Resources

- [Francinette](hhttps://github.com/Prashant-Bharaj/francinette) - Comprehensive tester for 42 projects

### AI Usage Disclosure

AI assistance was utilized in the following aspects of this project:

**Documentation and README**:
- AI was used to structure and format this README.md file according to 42 requirements
- Generated comprehensive tables and examples for clarity
- Helped organize technical documentation in a professional manner

**Learning Support**:
- Explanations of complex concepts.

---

## Project Structure

```
libft/
├── Makefile                    # Compilation rules
├── libft.h                     # Header file with all prototypes
│
├── ft_isalpha.c               # Character check functions
├── ft_isdigit.c
├── ft_isalnum.c
├── ft_isascii.c
├── ft_isprint.c
│
├── ft_strlen.c                # String functions
├── ft_strlcpy.c
├── ft_strlcat.c
├── ft_strchr.c
├── ft_strrchr.c
├── ft_strncmp.c
├── ft_strnstr.c
├── ft_strdup.c
│
├── ft_memset.c                # Memory functions
├── ft_bzero.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_memchr.c
├── ft_memcmp.c
│
├── ft_toupper.c               # Conversion functions
├── ft_tolower.c
├── ft_atoi.c
├── ft_calloc.c
│
├── ft_substr.c                # Additional string functions
├── ft_strjoin.c
├── ft_strtrim.c
├── ft_split.c
├── ft_itoa.c
├── ft_strmapi.c
├── ft_striteri.c
│
├── ft_putchar_fd.c            # File descriptor output
├── ft_putstr_fd.c
├── ft_putendl_fd.c
├── ft_putnbr_fd.c
│
└── ft_lst*_bonus.c            # Linked list functions
    ├── ft_lstnew_bonus.c
    ├── ft_lstadd_front_bonus.c
    ├── ft_lstsize_bonus.c
    ├── ft_lstlast_bonus.c
    ├── ft_lstadd_back_bonus.c
    ├── ft_lstdelone_bonus.c
    ├── ft_lstclear_bonus.c
    ├── ft_lstiter_bonus.c
    └── ft_lstmap_bonus.c
```

---

## Author

**miavrako** - 42 School Student

---

## License

This project is part of the 42 School curriculum and is provided for educational purposes.

---

*"The only way to learn a new programming language is by writing programs in it." - Dennis Ritchie*

