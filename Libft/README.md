*This project has been created as part of the 42 curriculum by irdzhupy.*
#*This project has been created as part of the 42 curriculum by <login1>[, <login2>[, <login3>[...]]].*

# Libft — Reimplementation of common C library functions

**Description**
- This project reimplements a subset of the standard C library (libc) functions as a learning exercise for low-level C programming and memory management. The goal is to provide a small, well-documented static library of utility functions that can be reused in later projects and to deepen understanding of pointers, memory allocation, string handling, and linked lists.

**Instructions**
- Requirements: a POSIX-compatible system and a C compiler (gcc/clang).
- To compile the library, run the provided `Makefile` targets.

Build and test commands:

```bash
make           # builds libft.a
make clean     # removes object files
make fclean    # removes object files and libft.a
make re        # fclean + make
```

Using the library in your project:

```bash
# compile your program and link with libft
gcc -I. -L. -lft your_program.c -o your_program
# or directly add libft.a to the link step
gcc -I. your_program.c libft.a -o your_program
```

Header file: `libft.h` contains all prototypes and type definitions needed to use the library.

**Library — Detailed description**
The library groups functions by category. Each function is prefixed with `ft_`.

- Memory operations:
	- `ft_bzero.c` — set bytes to zero
	- `ft_calloc.c` — allocate and zero-initialize memory
	- `ft_memchr.c` — locate byte in memory
	- `ft_memcmp.c` — compare blocks of memory
	- `ft_memcpy.c` — copy memory (non-overlapping)
	- `ft_memmove.c` — copy memory (handles overlap)
	- `ft_memset.c` — fill memory with a constant byte

- String operations:
	- `ft_strlen.c` — compute string length
	- `ft_strdup.c` — duplicate a string (malloc)
	- `ft_strchr.c` — locate first occurrence of a char in string
	- `ft_strrchr.c` — locate last occurrence of a char in string
	- `ft_strncmp.c` — compare up to n characters of strings
	- `ft_strlcpy.c` — copy string to sized buffer
	- `ft_strlcat.c` — append string to sized buffer
	- `ft_strnstr.c` — locate substring in length-limited string
	- `ft_substr.c` — allocate and return substring
	- `ft_strjoin.c` — concatenate two strings into new string
	- `ft_strtrim.c` — trim characters from both ends
	- `ft_split.c` — split string into array of strings by delimiter
	- `ft_striteri.c` — apply function to each char (index-aware)
	- `ft_strmapi.c` — create new string by applying function to each char
	- `ft_strjoin.c` — join two strings into a new allocation

- Conversions and numbers:
	- `ft_atoi.c` — convert string to integer
	- `ft_itoa.c` — convert integer to string

- Character checks and transforms:
	- `ft_isalpha.c` — alphabetic check
	- `ft_isdigit.c` — digit check
	- `ft_isalnum.c` — alphanumeric check
	- `ft_isascii.c` — ASCII range check
	- `ft_isprint.c` — printable character check
	- `ft_toupper.c` — convert to uppercase
	- `ft_tolower.c` — convert to lowercase

- File descriptor output helpers:
	- `ft_putchar_fd.c` — write a single character to fd
	- `ft_putstr_fd.c` — write a string to fd
	- `ft_putendl_fd.c` — write a string and newline to fd
	- `ft_putnbr_fd.c` — write an integer to fd

- String creation and iteration helpers:
	- `ft_striteri.c` — (see above)
	- `ft_strmapi.c` — (see above)

- Linked list utilities (simple singly-linked list API):
	- `ft_lstnew.c` — create a new list node
	- `ft_lstadd_front.c` — add node at list start
	- `ft_lstadd_back.c` — add node at list end
	- `ft_lstlast.c` — return last node
	- `ft_lstsize.c` — return number of nodes
	- `ft_lstdelone.c` — delete a single node
	- `ft_lstclear.c` — clear and free entire list
	- `ft_lstiter.c` — iterate and apply function to each node
	- `ft_lstmap.c` — map list to new list with function (creates new nodes)

Notes on behavior:
- All functions that allocate memory return NULL on allocation failure and follow sensible ownership conventions — caller is responsible for freeing returned allocations unless otherwise documented.
- The `libft.h` header contains prototypes and the `t_list` structure used by the linked list helpers.

**Resources**
- The C standard library documentation (man pages): `man 3 malloc`, `man 3 memcpy`, etc.
- The GNU C Library documentation: https://www.gnu.org/software/libc/manual/
- The C Programming Language (Kernighan & Ritchie)
- 42 subject / project PDF (your campus subject) — replace with your local link if available.
- Tutorials and references used for learning:
	- https://en.cppreference.com/w/c
	- https://pubs.opengroup.org/onlinepubs/007904975/functions/

**AI usage disclosure**
- AI tools were used for concept clarification and debugging explanations.
- AI assisted tasks: drafting and organizing this `README.md`, generating the structured list of functions and short descriptions, and suggesting example compilation commands.
---
