#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	int zero = 0, nine = 9;

	while (zero <= nine)
	{
		_putchar(zero + '0');
		zero++;
	}
	_putchar('\n');
}
