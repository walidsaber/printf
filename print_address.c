#include "main.h"


/**
 * print_address - adress print
 * @l: va list
 * @f: struct
 * Return: count
 */

int print_address(va_list l, sign_t *f)
{
	char *str;
	unsigned long int p = va_arg(l, unsigned long int);

	register int count = 0;

	(void)f;

	if (!p)
		return (_puts("(nil)"));
	str = convert(p, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}
