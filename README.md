## Description

**ft_printf()** formats and prints the values passed to it, based on the format specified in the first argument.

**Format** is a string that can contain three types of elements:
1. Regular characters, which are printed as they are.
2. Escape sequences, which are converted and then printed.
3. Format specifiers, which tell the function how to print the next argument.

Since ft_printf is a variadic function it can exept variable numbers and types of arguments, but the first argument is the one we use to format the rest.

Example:
ft_printf("Name: %s, Age: %d", "Alice", 25)
- first argument -> "Name: %s, Age: %d" (the format string)
- second argument -> "Alice"
- third argument -> 25

## Instructions

**va_list** is an object (array) which store all arguments passed to ft_printf. 
// can we check if list is empty beforehand?
 Our function go through the first argument (format string) character by character and if element is a regular character it calls ft_putchar to output it.
 If the element is one of escape sequence ft_printf converts them and then calls **bla-bla** function to print them. 
 If the element is a format specifier (%), than we need to check the next the next char to know how to print next argument from out list.

 ### Linking Libft to ft_printf
 Libft lybrary compiles first and then links into ft_printf, as a result we got static library libftprintf.a which contains libft's object files. 

How it was done:
1. I copied Libft to ft_printf
2. In Makefile 
	- add:
		LIBFTDIR = Libft
		LIBFT = ${LIBFTDIR}/libft.a
	- to build libft first 
		${LIBFT}:
			${MAKE} -C ${LIBFTDIR}
	- to create a libftprintf.a by copying libft.a, then adding printf objects into it
	
