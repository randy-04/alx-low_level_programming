#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, x;

	for (x = 0; x < 10; x++)
	{
		for (i = x + 1; i < 10; i++)
		{
			putchar(x + '0');
			putchar(i + '0');
			if (x != 8 || i != 9)
			{
			putchar(',');
			putchar(' ');
			}
			else
				putchar('\n');
		}
	}
	return (0);
}
