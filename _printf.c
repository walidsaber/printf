#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * _printf - printf replica
 * @format: format type
 * @...: args
 * Return: count
 */
int _printf(const char *format, ...)
{
	const char *ptr;
	va_list n_list;
	int count = 0;

	va_start(n_list, format);
	for (ptr = format; *ptr; ptr++)
	{
		if (*ptr != '%')
		{
			putchar(*ptr);
			count++;
			continue;
		}
		switch (*++ptr)
		{
			case 'i':
			case 'd':
				print_int(va_arg(n_list, int));
				break;
			case 's':
				count += print_str(va_arg(n_list, char *));
				break;
			case 'c':
				putchar((char)va_arg(n_list, int));
				count++;
				break;
			default:
				putchar('%');
				if ((*ptr) != '%')
					putchar(*ptr);
				break;
		}
	}
	va_end(n_list);
	return (count);
}
