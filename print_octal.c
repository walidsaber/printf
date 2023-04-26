#include "main.h"

/**
 * print_octal - prints a number
 * @l: va_list
 * @f: pointer
 * Return: the number
 */
int print_octal(va_list l, sign_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}
