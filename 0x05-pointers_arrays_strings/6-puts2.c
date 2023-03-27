#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int length = 0;
	int m = 0;
	char *n = str;
	int o;

	while (*n != '\0')
	{
		n++;
		length++;
	}
	m = length - 1;
	for (o = 0 ; o <= m ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
