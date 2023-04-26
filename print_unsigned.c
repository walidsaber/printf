#include "main.h"

/**
 * print_unsigned - prints
 * @l: va_list
 * @f: pointer
 * if a flag
 * Return: number
 */
int print_unsigned(va_list l, sign_t *f)
{
	unsigned int u = va_arg(l, unsigned int);
	char *str = convert(u, 10, 0);

	(void)f;
	return (_puts(str));
}
