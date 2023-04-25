#include "main.h"

/**
 * print_octal - prints an octal
 * @l: va_list
 * @f: pointer
 * Return: count
 */

int print_octal(va_list l, sign_t *f)
{
	unsigned int number = va_arg(l, unsigned int);
	char *str = convert(number, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}
