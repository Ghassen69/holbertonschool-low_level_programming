#include "holberton.h"
/**
 * main - entry point
 * print message
 * Return: success
 */
void print_alphabet(void)
{
int x;

for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
