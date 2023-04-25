#include "main.h"

/**
 * _printf - Printf replica
 * @format: format.
 * Return: Printed chars.
 */

int _printf(const char *format, ...)
{
	int i, print = 0, print_c = 0, fl, wid, prec, sz, buffer2 = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buffer2++] = format[i];
			if (buffer2 == BUFF_SIZE)
				print_buffer(buffer, &buffer2);
			print_c++;
		}
		else
		{
			print_buffer(buffer, &buffer2);
			fl = get_flags(format, &i);
			wid = get_width(format, &i, list);
			prec = get_precision(format, &i, list);
			sz = get_size(format, &i);
			++i;
			print = handle_print(format, &i, list, buffer,
					fl, wid, prec, sz);
			if (print == -1)
				return (-1);
			print_c += print;
		}
	}
	print_buffer(buffer, &buffer2);
	va_end(list);
	return (print_c);
}

/**
 * print_buffer - prints out the buffer
 * @buffer: arr
 * @buffer2: add
 */

void print_buffer(char buff[], int *buffer2)
{
	if (*buffer2 > 0)
		write(1, &buff[0], *buffer2);
	*buffer2 = 0;
}
