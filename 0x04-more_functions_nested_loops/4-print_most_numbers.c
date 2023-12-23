#include "main.h"
/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 *
 * Description: prints numbers from 0 to 9 witout 2,4 numbers
 *
 * Return: run numbers from 0 to 9
 *
*/

void	print_most_numbers(void)
{
	int z = 0;

	for (; z <= 9; z++)
	{
		if (z == 2 || z == 4)
		{
			continue;
		}
		else
		{
			_putcar(z + '0');
		}
		_putcar('\n');
	}
}
