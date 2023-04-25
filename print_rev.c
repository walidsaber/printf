#include "main.h"

/**
 * print_rev - prints rev
 * @l: args lists
 * @f: pointer
 * Return: i
 */

int print_rev(va_list l, sign_t *f)
{
    int i = 0, k;
    char *s = va_arg(l, char *);

    (void)f;
    if (!s)
        s = "(null)";
    while (s[i])
        i++;
    for (k = i - 1; k >= 0; k--)
        _putchar(s[k]);
    return (i);
}
