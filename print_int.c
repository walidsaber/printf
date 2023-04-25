#include "main.h"
#include <stdio.h>

/**
 * print_maxi - max int
 * @max: value
 * Return: void
 */

void print_maxi(int max)
{
	int num, digits[20], i, j;

	putchar('-');
	num = max;
	i = 0;

	while (num > 0)
	{
		digits[i++] = num % 10;
		num /= 10;
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (j == 0)
			putchar('8');
		else
			putchar(digits[j] + '0');
	}
}
/**
 * print_int - print int
 * @num: number
 * Return: result
 */
void print_int(int num)
{
	int store, temp, count, i;
	char *buffer;

	if (num == INT_MIN)
	{
		print_maxi(INT_MAX);
		return;
	}
	store = num;
	if (num < 0)
	{
		putchar('-');
		num *= -1;
	}
	temp = num;
	count = 0;
	while (temp != 0)
	{
		temp /= 10;
		count++;
	}
	buffer = (char *) malloc((count + 1) * sizeof(char));

	i = count - 1;
	if (num == 0)
	{
		putchar('0');
	} else
	{
		do {
			buffer[i--] = num % 10 + '0';
			num /= 10;
		} while (num);
	}
	if (store != 0)
	{
		i = 0;
		while (i < count)
			putchar(buffer[i++]);
	}
	free(buffer);
}
