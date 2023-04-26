#include "main.h"

/**
 * print_rev - prints a string
 * @l: argument
 * @f: pointer to the struct
 * Return: length
 */
int print_rev(va_list l, sign_t *f)
{
	int i = 0, j;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}
