#include "holberton.h"
#include <stdio.h>
/**
* print_rev - print string in reverse
* @s: pointer
*/
void print_rev(char *s)
{
	int i, j;

	i = 0;

	while (*(s + i) != 0)
	{
		i = i + 1;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
