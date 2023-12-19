#include <unistd.h>

/**
 * _putchar - write the character x to stdout
 * @x the character to print
 *
 * Return 0 success / -1 error
*/

int	_putchar(char x)
{
	return (write(1, &x, 1));

