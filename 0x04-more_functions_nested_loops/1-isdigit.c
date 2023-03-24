#include "main.h"

/**
 * _isdigit - checks for digit 0 through 9
 * @c: digit checked
 * Return: 1 if @c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	int zero = 48, nine = 57;

	if (c >= zero && c <= nine)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
