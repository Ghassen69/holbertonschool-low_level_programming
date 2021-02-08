#include "holberton.h"
/**
 * main - entry point
 * print message
 * Return: success
 */
int main(void)
{
int i;

char msg[10] = "Holberton";

for  (i = 0; i <= 8; i++)
{
_putchar(msg[i]);
}
_putchar('\n');

return (0);
}
