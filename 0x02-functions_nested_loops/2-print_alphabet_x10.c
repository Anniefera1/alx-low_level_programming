#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	char letter1;
	char letter2;

	for (letter2 = 1; letter1 <= 9; letter1++)
	{
		for (letter2 = 'a'; letter2 <= 'z'; letter2++)
		{
			_putchar(letter2);
		}
		_putchar('\n');
	}
}
