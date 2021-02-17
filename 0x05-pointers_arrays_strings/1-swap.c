#include "holberton.h"
/**
 * swapt_int - uppercase letters
 * @a : parameter
 * @b : parameter
 */
void swap_int(int *a, int *b)
{
int i;
i  = *b;
*b = *a;
*a = i;
}


