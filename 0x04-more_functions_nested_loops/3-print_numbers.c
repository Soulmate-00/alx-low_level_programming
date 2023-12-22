#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 *
 * Return: always 0
*/

void	print_numbers(void)
{
	int z;

	for (z = 0; z <= 9; z++)
	{
		_putchar(z + '0');
	}
	_putchar('\n');
}
