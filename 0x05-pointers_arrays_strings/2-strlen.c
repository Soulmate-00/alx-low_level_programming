#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: The parameter to input
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;

	return (count);
}
