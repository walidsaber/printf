#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int handle_string(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		handle_string("(null)");
		return (6);
	}
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	return (i);
}

int len_num(int num)
{
	if (num == 0)
		return (0);
	return (1 + len_num(num / 10));
}

int handle_number(int num)
{
	if (num == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		handle_number(147483648);
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		handle_number(num / 10);
		handle_number(num % 10);
	}
	else if (num < 10)
	{
		_putchar(num + '0');
	}
	return (1);
}
// printf("pjczoc %s ", "alx")
int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;
	va_start(args, format);

	if (!format || !format[0])
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c') 
			{
				char c = va_arg(args, int);
				count += _putchar(c);

			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);
				count += handle_string(str);
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);
				if (num < 0)
					count++;
				count += len_num(num);
				handle_number(num);
			}
			else 
			{
				_putchar('%');
				count++;
				if (*format)
				{
					_putchar(*format);   
					count++;
				}
			}
			format++;
		}
		else
		{
			_putchar(*format);
			format++;
			count++;
		}
	}
	return (count);
}

int main()
{
	_printf("hello %d %i", 423, 12);

	return (0);
}
