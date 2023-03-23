#include "holberton.h"

/**
 * more_numbers - prints numbers 0-14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 1; b <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
