#include "main.h"
/**
 * _puts - function that prints a string, followed
 * by a new line, to stdout.
 * @str: an input string
 * Return: 0
 */
void _puts(char *str)
{
	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}

