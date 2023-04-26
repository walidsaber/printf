#include "main.h"

/**
 * print_hex_big - prints a number in hexadecimal
 * @l: va_list arguments
 * @f: pointer
 * Return: the number
 */
int print_hex_big(va_list l, sign_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);
	return (count);
}
