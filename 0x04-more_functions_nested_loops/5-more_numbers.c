
#include "holberton.h"
/**
 * more_numbers - print more numbers
 */
void more_numbers(void)
{
int c;
int i;

for (c = 0; c <= 10; ++c)
{
for (i = 0; i <= 14; ++i)
{
if (i > 9)
{
_putchar(i / 10 + '0');
}
_putchar(i % 10 + '0');
}
_putchar('\n');
}
}
