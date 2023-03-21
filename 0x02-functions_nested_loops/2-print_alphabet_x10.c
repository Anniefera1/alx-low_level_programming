#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
* followed by a new line
* Return: 0
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
