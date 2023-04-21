#include "main.h"
#include <stdarg.h>

/**
 * _printf - handling specifiers and printing chars
 * @format: format type
 * Return: result
 */

int _printf(const char *format, ...)
{
	va_list fm;
	char *sval;
	const char *ptr;
	void *pval;
	char *spval;
	unsigned int bval;
	int cval;
	int hexaval;
	unsigned int ival;
	unsigned int uval;
	double dval;
	long oval;
	va_start(fm,format);
	for(ptr = format; *ptr; ptr++)
	{
		if (*ptr != '%')
		{
			putchar(*ptr);
			continue;
		}
		if (*++ptr == '.')
		{
			// %.2d;
		} else {
			switch (*++ptr)
			{

				case 'i' :
				case 'd' :
					ival = va_arg(fm, unsigned int);
					print_int(ival);
					break;
				case 'f' :
					dval = va_arg(fm, double);
					print_double(dval);
					break;
				case 's' :
					for (sval = va_arg(fm, char *); *sval; sval++)
						putchar(*sval);
					break;
				case 'u' :
					uval = va_arg(fm, unsigned int);
					print_unsint(uval);
					break;
				case 'o' :
					oval = va_arg(fm, long);
					print_octal(oval);
					break;
				case 'x':
					hexaval = va_arg(fm, int);
					print_hexaLOWER(hexaval);
					break;
				case 'X':
					hexaval = va_arg(fm, int);
					print_hexaUPPER(hexaval);
					break;
				case 'c' :
					cval = va_arg(fm, int);
					print_char(cval);
					break;
				case 'p' :
					pval = va_arg(fm, void *);

					print_adress((void*) pval);
					break;
				case 'b' :
					bval = va_arg(fm, unsigned int);
					print_binary(bval);
					break;
				default :
					putchar('%');
					putchar(*ptr);
					break;
			}
		}

	}

	va_end(fm);
	return *format;
}
