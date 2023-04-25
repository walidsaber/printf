#include "main.h"

/**
 * get_flag - flag
 * @s: char
 * *f: struct
 * Return: i
 */
int get_flag(char s, sign_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}
	return (i);
}
