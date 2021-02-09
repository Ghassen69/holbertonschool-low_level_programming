#include "holberton.h"
/**
* times_table - print the times table
* @i : parameter
* @j : parameter
*/
void times_table(void)
 {
int i;
int j;
    for(int i=0; i<=9; i++)
    {
      for(int j=0; j<=9; j++)
      _putchar(j);

      _putchar("\n");
    }
}
