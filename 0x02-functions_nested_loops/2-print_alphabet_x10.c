#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabets in lower case 10 times
 * Return: 0 - doesn't return anything
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		char c;
		for (c = 'a'; c <= 'z'; ++c)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
