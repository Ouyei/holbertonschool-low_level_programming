#include "main.c"

/**
 * print_alphabet_x10 - Print 10 times the alphabet in lowercase
 */
void print _alphabet_x10(void)
{
	in count = 0;
	cahr letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
