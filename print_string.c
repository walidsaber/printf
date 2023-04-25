#include "main.h"

/**
 * print_string - string print
 * @l: list
 * @f: struct
 * Return: str
 */

int print_string(va_list l, sign_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}
