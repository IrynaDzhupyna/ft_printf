/* main.c */
#include <stdio.h>
#include <limits.h>
#include <stdint.h>

/* Change this include to your header name/path */
#include "ft_printf.h"

static void banner(const char *title)
{
    printf("\n==================== %s ====================\n", title);
}

static void compare_line(const char *label, const char *fmt, ...)
{
    int ret_sys;
    int ret_ft;

    va_list ap1;
    va_list ap2;

    printf("\n-- %s --\n", label);

    va_start(ap1, fmt);
    va_copy(ap2, ap1);

    printf("printf   : ");
    ret_sys = vprintf(fmt, ap1);
    printf("\n");

    printf("ft_printf: ");
    ret_ft = ft_vprintf(fmt, ap2); /* if you don't have ft_vprintf, see note below */
    printf("\n");

    va_end(ap1);
    va_end(ap2);

    printf("ret printf   = %d\n", ret_sys);
    printf("ret ft_printf= %d\n", ret_ft);
}

/*
NOTE:
- If your project doesn't include ft_vprintf, you have two options:
  1) temporarily create ft_vprintf as a thin wrapper around your ft_printf core, OR
  2) delete compare_line() and just do paired calls manually (shown below too).
*/

int main(void)
{
    banner("BASIC");
    printf("printf   : Hello %% world!\n");
    printf("ret printf   = %d\n", printf("printf   : Hello %% world!\n"));
    printf("ret ft_printf= %d\n", ft_printf("ft_printf: Hello %% world!\n"));

    banner("%c");
    printf("ret printf   = %d\n", printf("printf   : [%c] [%c] [%c]\n", 'A', '0', '\n'));
    printf("ret ft_printf= %d\n", ft_printf("ft_printf: [%c] [%c] [%c]\n", 'A', '0', '\n'));

    banner("%s");
    printf("ret printf   = %d\n", printf("printf   : [%s] [%s]\n", "Berlin", ""));
    printf("ret ft_printf= %d\n", ft_printf("ft_printf: [%s] [%s]\n", "Berlin", ""));
    printf("ret printf   = %d\n", printf("printf   : NULL string -> [%s]\n", (char *)NULL));
    printf("ret ft_printf= %d\n", ft_printf("ft_printf: NULL string -> [%s]\n", (char *)NULL));

    banner("%p");
    {
        int x = 42;
        void *p1 = &x;
        void *p0 = NULL;
        printf("ret printf   = %d\n", printf("printf   : p1=%p p0=%p\n", p1, p0));
        printf("ret ft_printf= %d\n", ft_printf("ft_printf: p1=%p p0=%p\n", p1, p0));
    }

    banner("%d / %i");
    printf("ret printf   = %d\n", printf("printf   : %d %i %d %d\n", 0, 1, -1, 42));
    printf("ret ft_printf= %d\n", ft_printf("ft_printf: %d %i %d %d\n", 0, 1, -1, 42));
    printf("ret printf   = %d\n", printf("printf   : INT_MIN=%d INT_MAX=%d\n", INT_MIN, INT_MAX));
    printf("ret ft_printf= %d\n", ft_printf("ft_printf: INT_MIN=%d INT_MAX=%d\n", INT_MIN, INT_MAX));

    banner("%u");
    printf("ret printf   = %d\n", printf("printf   : %u %u %u\n", 0u, 1u, 42u));
    printf("ret ft_printf= %d\n", ft_printf("ft_printf: %u %u %u\n", 0u, 1u, 42u));
    printf("ret printf   = %d\n", printf("printf   : UINT_MAX=%u\n", UINT_MAX));
    printf("ret ft_printf= %d\n", ft_printf("ft_printf: UINT_MAX=%u\n", UINT_MAX));
    printf("ret printf   = %d\n", printf("printf   : cast -1 to unsigned = %u\n", (unsigned int)-1));
    printf("ret ft_printf= %d\n", ft_printf("ft_printf: cast -1 to unsigned = %u\n", (unsigned int)-1));

    banner("%x / %X");
    printf("ret printf   = %d\n", printf("printf   : %x %X %x\n", 0u, 255u, UINT_MAX));
    printf("ret ft_printf= %d\n", ft_printf("ft_printf: %x %X %x\n", 0u, 255u, UINT_MAX));
    printf("ret printf   = %d\n", printf("printf   : 305441741 -> %x / %X\n", 305441741u, 305441741u));
    printf("ret ft_printf= %d\n", ft_printf("ft_printf: 305441741 -> %x / %X\n", 305441741u, 305441741u));

    banner("MIXED");
    {
        int a = -123;
        unsigned int b = 123u;
        void *p = &a;
        printf("ret printf   = %d\n",
               printf("printf   : c=%c s=%s p=%p d=%d i=%i u=%u x=%x X=%X %%\n",
                      'Z', "test", p, a, a, b, b, b));
        printf("ret ft_printf= %d\n",
               ft_printf("ft_printf: c=%c s=%s p=%p d=%d i=%i u=%u x=%x X=%X %%\n",
                         'Z', "test", p, a, a, b, b, b));
    }

    return 0;
}

