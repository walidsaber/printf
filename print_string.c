#include "main.h"

/**
 * print_string - print str
 * @l: l
 * @f: f
 * Return: puts
 */
int print_string(va_list l, sign_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}
