#include <stdio.h>

/**
 * main - prints sum of multiples of three and five upto 1024
 *
 * Return: 0
 */

int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
		i++
	}
	printf("%d\n", z);
	return (0);
}
