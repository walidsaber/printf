#include "main.h"

/**
 * _printf - printf replica
 * @format: format type
 * @...: args
 * Return: count
 */
int _printf(const char *format, ...)
{
	int (*funcpoint)(va_list, sign_t *);
	const char *p;

	register int count = 0;

	va_list args;

	sign_t flags = {0, 0, 0};

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flags))
				p++;
			funcpoint = get_print(*p);
			count += (funcpoint)
				? funcpoint(args, &flags)
				: _printf("%%%c", *p);
		} else
			count += _putchar(*p);
	}
	_putchar(-1);
	va_end(args);
	return (count);
}
