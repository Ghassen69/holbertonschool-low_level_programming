#include <stdio.h>
/**
 * main - entry point
 * print message
 * Return: success
 */
#include<stdio.h>
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %d byte(s)\n", sizeof(long int));
	printf("Size of long long int: %d bytes\n", sizeof(long long int));
	printf("Size of float: %d byte(s)\n", sizeof(float));

	return (0);
}
