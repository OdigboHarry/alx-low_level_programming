#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description - Printing a string without using the
 * puts() and printf() function
 *
 * Return: 1 Always (Success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}
