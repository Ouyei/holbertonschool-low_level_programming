#include "main.h"

/**
 * Write a function that prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_pucthar(letter);

	_putchar('\n');
}
