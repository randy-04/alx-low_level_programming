#include "holberton.h"
/**
 * print_alphabet - prints alphabets in lower case
 * Return: 0 - doesn't return anything
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; ++c)
	{
		_putchar(c);
	}
	_putchar('\n');
}