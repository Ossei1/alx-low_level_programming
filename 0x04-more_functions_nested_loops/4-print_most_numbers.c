#include "main.h"

/**
 * print_most_numbers - Print from 0-9
 * Description: prints the numbers excluding 2 and 4
 * Return: the numbers 0-9
 */

void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
	if (x != '2' && x != '4')
	{
	_putchar(x);
	}
	}
	_putchar('\n');
}
