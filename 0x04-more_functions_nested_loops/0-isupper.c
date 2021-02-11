#include "holberton.h"
/**
 * _isupper - uppercase letters
 * @c : parameter
 * Return: success
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
