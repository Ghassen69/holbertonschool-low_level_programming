
#include "holberton.h"
/**
 * print_diagonal - print straight line
 * @n : paremeter
 */
void print_diagonal(int n)
{
int x, y;
x = 0;
if (n > 0)
for (y = 0 ; y < n; y++)
{
for (x = 0; x < y; x++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
else
_putchar('\n');
}
