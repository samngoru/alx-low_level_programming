#include "main.h"

/**
 * get_bit - returns bit's value at an index as a decimal number
 * @n: number to search
 * @index: bit's index
 * Return: bit's value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
