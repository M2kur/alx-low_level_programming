#include "main.h"

/**
 * main - function that prints the alphabet, in lowercase
 *
 * return: Always 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
