#include "holberton.h"
/**
 * print_alphabet_x10 - print x10
 * print message
 * Return: success
 */
void print_alphabet_x10(void)
{
int x, c;

for (c = 0; c < 10; c++)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');

}
}
