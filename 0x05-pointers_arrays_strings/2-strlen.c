#include "holberton.h"
/**
 * _strlen - return length of a string
 * @s : parameter
 * Return: success
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
i++;
return (i);
}
