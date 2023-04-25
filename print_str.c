#include "main.h"

/**
 * print_str - handles str
 * @str: string
 * Return: i
 */
int print_str(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		print_str("(null)");
		return (6);
	}
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	return (i);
}
