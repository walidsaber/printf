#include "main.h"

/**
 * print_int - print int
 * @num: number
 * Return: result
 */

void print_int(int num) {
	int store = num, temp = num, count = 0, i;
	char *buffer;

	if (num < 0) 
	{
		putchar('-');
		num *= -1;
	}
	while (temp != 0)
	{
		temp /= 10;
		count++;
	}
	buffer = (char*) malloc((count + 1) * sizeof(char));
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
		{
			putchar(buffer[i++]);
		}
	}
	free(buffer);
}
