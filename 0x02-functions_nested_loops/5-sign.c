#include "holberton.h"
/**
 * print_sign - prints the sign of a number
 * @n: integer to be tested
 * Return: returns 1 when positive, 0 when 0,
 * -1 when negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
