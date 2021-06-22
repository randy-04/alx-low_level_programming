#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: integer argument
 * Return: returns the value of the last digit
 */
int print_last_digit(int x)
{
	int lastDigit;

	if (x < 0)
	{
		lastDigit = (x % 10) * -1;
	}
	else
	{
		lastDigit = x % 10;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
