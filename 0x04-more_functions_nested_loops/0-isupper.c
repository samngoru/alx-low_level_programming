#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character checked
 * Return: 1 if @c is uppercase, otherwise return 0
 */

int _isupper(int c)
{
	int A = 65, Z = 90;

	if (c >= A && c <= Z)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
