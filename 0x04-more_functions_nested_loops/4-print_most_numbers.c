#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 to 9 followed by a new line
 * without printing 2 and 4
 */
void print_most_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		if (c == 2 || c == 4)
		{
			c++;
		}
		else
		{
			_putchar('0' + c);
			c++;
		}
	}
	_putchar('\n');
}
