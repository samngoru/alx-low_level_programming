#include "main.h"

/**
 * positive_or_negative- check if number is positive or negative
 *
 * @i: parameter
 *
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
