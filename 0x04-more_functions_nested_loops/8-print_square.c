#include "holberton.h"
/**
 * print_square - print square
 */
void print_square(int size)
{
int c;
int k;
if (size <= 0)
_putchar('\n');
for (k = 0 ; k < size ; k++)
{
for (c = 0 ; c < size ; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
