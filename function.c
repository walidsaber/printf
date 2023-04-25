#include "main.h"


/**
 * convert - convertion
 * @num: long int
 * @base: int
 * @lowercase: int
 * Return: pt
 */

char *convert(unsigned long int num, int base, int lowercase)
{
	static char *xp;
	static char buffer[50];
	char *pt;

	xp = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	pt = &buffer[49];
	*pt = '\0';
	do {
		*--pt = xp[num % base];
		num /= base;
	} while (num != 0);

	return (pt);
}
/**
 * count_digit - count number of digits
 * @i: int
 * Return: d
 */
int count_digit(int i)
{
	unsigned int count = 0;
	unsigned int xp;

	if (i < 0)
		xp = i * -1;
	else
		xp = i;
	while (xp != 0)
	{
		xp /= 10;
		count++;
	}
	return (count);
}
/**
 * print_number - print num
 * @n: int
 * Return: void
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}
