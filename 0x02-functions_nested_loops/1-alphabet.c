#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 * Description: 'prints alphabets in small caps'
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
