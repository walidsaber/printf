#include "main.h"

/**
 * print_hex_big - print hex
 * @l: va_list
 * @f: pointer
 * Return: count
 */
int print_hex_big(va_list l, sign_t *f)
{
	unsigned int number = va_arg(l, unsigned int);
	char *str = convert(number, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);
	return (count);
}
