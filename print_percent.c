#include "main.h"

/**
 * print_percent - prints a percent
 * @l: va_list arguments
 * @f: pointer to the struct
 * Return: number of char printed
 */
int print_percent(va_list l, sign_t *f)
{
	(void)l;
	(void)f;
	return (_putchar('%'));
}
