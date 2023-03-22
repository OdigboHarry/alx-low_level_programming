#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - A function that prints the letters of the alphabet in lower
 * case
 *
 * Return: void
 */
void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
