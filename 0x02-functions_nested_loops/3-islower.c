#include "holberton.h"

/**
 * _islower - checks for lowercase characters
 * @c: value of char in ascii
 * Return: 0 when false, 1 when true
 */	
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
