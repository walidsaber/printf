#include "main.h"

/**
 * print_unsigned - printing unsigned int
 * @l: va_list
 * @f: pointer
 * Return: number
 */
int print_unsigned(va_list l, sign_t *f)
{
	unsigned int i = va_arg(l, unsigned int);
	char *str = convert(i, 10, 0);

	(void)f;
	return (_puts(str));
}
