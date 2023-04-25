#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - printf replica
 * @format: format type
 * @...: args
 * Return: count
 */

int _printf(const char *format, ...)
{
	va_list n_list;

	va_start(n_list, format);
	const char *ptr;
	int count = 0;
	char *s_val;

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
			case 's':
				for (s_val = va_arg(n_list, char *); *s_val; s_val++)
					putchar(*s_val);
				break;
			case 'c':
				putchar((char)va_arg(n_list, int));
				break;
			default:
				putchar('%');
				putchar(*ptr);
				break;
		}
	}
	va_end(n_list);
	return (count);
}
