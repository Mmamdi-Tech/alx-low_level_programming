#include <stdio.h>

/**
 * print_to_98 - print all the numbers between the provided number and 98
 * in order separated by a comma and a space
 * @n: integer to start at
 * Return: Void.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
