#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - A function that prints all letters of the alphabets
 * ten times
 * @c: holds the character that is printed out
 * @d: variable for count
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int d = 0;

	while (d < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
