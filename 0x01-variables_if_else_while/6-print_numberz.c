#include<stdio.h>

/**
 * main - program that prints all single digit numbers of base 10 starting frm0
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);

}
