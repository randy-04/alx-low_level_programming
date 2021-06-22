#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: starting point of numbers to be printed 
 * Return: no return
 */
void print_to_98(int n)
{
	int i = 0;
	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i < 98)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}	
