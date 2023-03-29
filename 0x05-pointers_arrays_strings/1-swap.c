#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: points to the first integer
 * @b: points to the second integer
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
