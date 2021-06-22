#include "holberton.h"


/**
 * _isalpha - checks for uppercase characters
 * @c : value of char in ascii
 * Return: 0 when false, 1 when true
 */	
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
