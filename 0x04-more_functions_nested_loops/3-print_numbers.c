#include "main.h"

/**
 * print_numbers - prints 0123456789\n
 * Return: the number 0-9
 */

void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
	_putchar(a);
	}
	_putchar('\n');
}
