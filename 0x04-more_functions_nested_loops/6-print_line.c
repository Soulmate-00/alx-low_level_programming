#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: the parameter
 *
 * Return: always nothing
*/

void	print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('-');
	}
	_putchar('\n');
}
