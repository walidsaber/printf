#include "main.h"

/**
 * print_hex - prints hex num
 * @l: va_list
 * @f: pointer
 * Return: the num
 */
int print_hex(va_list l, sign_t *f)
{
	unsigned int number = va_arg(l, unsigned int);
	char *string = convert(number, 16, 1);
	int count = 0;

	if (f->hash == 1 && string[0] != '0')
		count += _puts("0x");
	count += _puts(string);
	return (count);
}
