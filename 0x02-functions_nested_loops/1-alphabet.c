#include "main.h"

/**
 * print_alphabet - function that print all the alphabet
 *
 * Return : always 0
 *
*/

void print_alphabet(void)
{
	char p = 'a';

	while (p <= 'z')
	{
		_putchar(p);
		p++;
	}
	_putchar('\n');
}
