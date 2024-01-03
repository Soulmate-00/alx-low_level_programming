#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: The first parameter
 * @b: te second parameter
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
