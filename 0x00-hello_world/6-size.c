#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the sizes of the various data
 * types in your computer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d byte(s)\n", (int)sizeof(a));
	printf("Size of an int: %d byte(s)\n", (int)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %llu byte(s)\n", (long long int)sizeof(d));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(e));
	return (0);
}
