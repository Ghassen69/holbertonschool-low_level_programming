#include "holberton.h"
/**
 * _isdigit - uppercase letters
 * @c : parameter
 * Return: success
 */
int _isdigit(int c)
{
if ((c <= 57) && (c >= 48))
{
return (1);
}
else
{
return (0);
}
}
