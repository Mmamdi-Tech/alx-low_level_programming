#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number being tested
 * Return: Always 0 (Is a Success).
 */

int print_last_digit(int n)
{
	int last_digit-n % 10;

	if (last_digit < n)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return(last_digit);
}
