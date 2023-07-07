#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints from n to 98
 * @n: the first number to be printed
 */

void print_to_98(int n)
{
	if (n < 99)
	{
		while (n < 99)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 97)
	{
		while (n > 97)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("\n");
}
