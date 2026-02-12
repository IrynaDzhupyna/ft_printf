
## Description
Efficiently

When ft_printf function scans the format string character by charecter looking for a format specifiers (cspdiuxX%). 

If char == % it calls va_arg to look at the next character(the specifier).
If char != % it proceeds to the next character.

Return (num_char_printed)

## Design of a function
We can choose to:
a) make a big **if/else** or **switch** block that calls small helper function 
b) a **lookup table** mapping specifier -> function pointer)

I choose option B because I want to learn lookup tables and I feel it will be more efficient to use it here.

### Lookup Table (LUT)
 - is the array populated with the names of all the elements (founctions?)
 



