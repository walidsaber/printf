#include "main.h"

/**
 * print_int - prints
 * @l: va_list
 * @f: pointer
 * Return: number
 */
int print_int(va_list l, sign_t *f)
{
	int n = va_arg(l, int);
	int res = count_digit(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		res += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		res += _putchar('+');
	if (n <= 0)
		res++;
	print_number(n);
	return (res);
}
