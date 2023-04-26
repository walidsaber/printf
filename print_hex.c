#include "main.h"

/**
 * print_hex - prints hex
 * @l: va_list
 * @f: pointer
 * Return: the number
 */
int print_hex(va_list l, sign_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}
