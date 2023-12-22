#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 *
 * @z: the number to be checked
 *
 * Return: 1 if z is uppercase , 0 otherwise
*/

int	_isupper(int z)
{
	if (z >= 65 && z <= 90)
	{
		return (1);
	}
	return (0);
}
