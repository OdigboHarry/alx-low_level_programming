#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers, followed by a new
 * line
 * @a: Pointer to integer array
 * @n: An integer variable
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (a[c] == a[n - 1])
		{
			printf("%d", a[c]);
		}
		else
		{
			printf("%d, ", a[c]);
		}
	}
	printf("\n");
}
