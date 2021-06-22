#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @x: integer argument
 * Return: returns the value of the last digit
 */
int print_last_digit(int x)
{
	int lastDigit;
	lastDigit = x % 10;
	return (lastDigit);
}
