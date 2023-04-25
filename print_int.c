#include "main.h"

/**
 * print_int - prints an integer
 * @l: va_list
 * @f: point
 * Return: cc
 */
int print_int(va_list l, sign_t *f)
{
	int n = va_arg(l, int);
	int cc = count_digit(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		cc += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		cc += _putchar('+');
	if (n <= 0)
		cc++;
	print_number(n);
	return (cc);
}
