#include "main.h"

/**
 * _isalpha - checks alphabet cases
 *
 * @c: parameter checked
 *
 * Return: 1 if an alphabet 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
