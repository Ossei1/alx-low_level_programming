#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @n: inputs number an integer
 * @l: last digit
 * Return: last digit
 */

int print_last_digit(int n)
{
	int n; 

		n = l % 10;
	if (n < 0)
	{
		_putchar(-n + 48);
		return (-n);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
}
