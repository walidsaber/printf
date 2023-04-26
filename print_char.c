#include "main.h"

/**
 * print_char - prints
 * @l: va_list
 * @f: pointer
 * Return: number
 */
int print_char(va_list l, sign_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
