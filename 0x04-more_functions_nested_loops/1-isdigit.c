#include "main.h"
/**
 * _isdigit - function that checks for uppercase character
 *
 * @z: the number to be checked
 *
 * Return: 1 if z is uppercase , 0 otherwise
*/

int	_isdigit(int z)
{
	if (z >= 48  && z <= 75)
	{
		return (1);
	}
	return (0);
}
