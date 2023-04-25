#include "main.h"

/**
 * print_binary - print binary
 * @l: va_list
 * @f: pointer
 * Return: the number
 */

int print_binary(va_list l, sign_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	return (_puts(str));
}
