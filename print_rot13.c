#include "main.h"

/**
 * print_rot13 - rot13 code
 * @l: list of args
 * @f: pointer
 * Return: j
 */

int print_rot13(va_list l, sign_t *f)
{
	int i, k;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(l, char *);

	(void)f;
	for (k = 0; s[k]; k++)
	{
		if (s[k] < 'A' || (s[k] > 'Z' && s[k] < 'a') || s[k] > 'z')
			_putchar(s[k]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[k] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}

	return (k);
}
