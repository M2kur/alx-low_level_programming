#include "main.h"
/**
 * puts2 - function that prints every other character of
 * a string, starting with the first characte.
 * @str: validate thw character
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{

			-putchar(s[i]);
		}
		i++
	}
	_putchar('\n')
}
