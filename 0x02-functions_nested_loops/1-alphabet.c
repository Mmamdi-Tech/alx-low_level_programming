#include "main.h"

/**
 * print_alphabet - print out alphabet
 *
 * Return: Always 0 (Is a Success)
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;

	}
	_putchar ('\n');

}
