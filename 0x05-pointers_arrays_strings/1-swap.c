#include "main.h"

/**
 * swap_int - swaps integers
 *
 * @a: first input
 * @b: second input
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}
