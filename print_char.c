#include "main.h"

/**
 * print_char - prints a char
 * @l: va_list
 * @f: pointer
 * Return: num
 */

int print_char(va_list l, sign_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
