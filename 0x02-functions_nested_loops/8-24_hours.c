#include "holberton.h"
/**
* void jack_bauer - minute of the day of jack bauer
* Return: success
*/
void jack_bauer(void)
{
	int x;
	int e;

	for (x = '0'; x <= '24'; ++x)
	{
	for (e = '0'; e <= '59'; ++e)
	{
	_putchar(x);
	_putchar(e);
	_putchar(':');
	}
	}
}

