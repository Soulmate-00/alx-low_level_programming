#include <stdio.h>

/**
 * main - Entry point main function
 *
 *Return: Always 0
*/
int main(void)
{
	char lr;

	for (lr = 'a'; lr <= 'z'; lr++)
	{
		if (lr != 'q' && lr != 'e')
			putchar(lr);
	}
	putchar('\n');

	return (0);
}
