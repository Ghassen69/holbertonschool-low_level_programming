#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * print message
 * Return: success
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; ++x)
	{
	if (x != '0')
	{
	putchar(',');
	putchar(' ');
	}
	putchar(x);
	}

	putchar('\n');
	return (0);
}
