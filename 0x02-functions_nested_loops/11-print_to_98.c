#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - printing to 98
 * @n : paremeter
 * Return: success
 */
void print_to_98(int n)
{
int i;
if (n == 98)
printf("98\n");
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
			printf(", ");
			}
		}
		printf("\n");
	}
if (n < 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
else
{
printf("\n");
}
}
}
}
