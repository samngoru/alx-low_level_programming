#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 except 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int zero;

	for (zero = 0; zero <= 9; zero++)
	{
		if ((zero != 2) && (zero != 4))
		{
			_putchar(zero + '0');
		}
	}
	_putchar('\n');
}
