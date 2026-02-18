*This project has been created as part of the 42 curriculum by <irdzhupy>.*

# ft_printf

## Description

**ft_printf()** is a custom implementation of the standard `printf` function.
It formats and prints values to standard output according to a format string.

The goal of this project is to gain a deep understanding of:
- variadic functions in C
- format parsing
- low-level output handling
- modular and extensible design

The format string may contain:
1. Regular characters
2. Escape sequences
3. Format specifiers

---

## Instructions

### Build

```bash
make
```

This generates the static library:

```text
libftprintf.a
```

Makefile targets:

```bash
make        # build library
make clean  # remove object files
make fclean # remove object files and library
make re     # rebuild everything
```

### Usage

```c
#include "ft_printf.h"
```

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a -o test_printf
```

```c
int main(void)
{
    ft_printf("Hello %s! Number: %d, Hex: %x\n", "Berlin", 42, 42);
    return (0);
}
```

---

## Supported Conversions

- `%c` character
- `%s` string
- `%p` pointer
- `%d` / `%i` signed integer
- `%u` unsigned integer
- `%x` hexadecimal (lowercase)
- `%X` hexadecimal (uppercase)
- `%%` percent sign

---

## Algorithm and Data Structures

The implementation uses a single-pass parser over the format string.

- Characters are processed sequentially.
- `%` triggers a conversion handler.
- Each specifier is mapped to a dedicated function.
- `va_list` manages access to variadic arguments.

No complex data structures are required; the implementation relies on stack variables and controlled recursion for number output.

---

## Linking Libft

Libft is compiled first and merged into the final static library:

1. `make -C Libft`
2. copy `libft.a` into `libftprintf.a`
3. append ft_printf object files

---

## Resources

### References
- `man 3 printf`
- GNU C Library documentation
- 42 Libft documentation
- CS50 lectures on variadic functions

### AI Usage

AI tools were used only for conceptual clarification and documentation review.
All code was written and tested manually.
