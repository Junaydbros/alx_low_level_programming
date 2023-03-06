#include <stdio.h>
#include "main.h"

/**
 * print_rev - function that prints a string in reverse followed by a new line
 * @s: the string to be printed in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int a = 0;

	while (*s < '\0')
	{
		_putchar(*s);
		a--;
		s--;
	}
	_putchar('\n');
}
