#include <stdio.h>
#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int a = 0, b, c;
	char d;

	while (s[a] != '\0')
	{
		a++;
	}

	c = s[a];

	for (b = 0; b < (c / 2); b++)
	{
		d = s[b];
		s[b] = s[c - 1 - b];
		s[c - 1 - b] = d;
	}
}
