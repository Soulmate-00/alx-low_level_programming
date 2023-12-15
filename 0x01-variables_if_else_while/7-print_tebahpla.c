#include <stdio.h>

/**
 * main - Entry point main function
 *
 *Return: Always 0
*/
int main(void)
{
	char lr;

	for (lr = 'z'; lr >= 'a'; lr--)
		putchar(lr);
	putchar('\n');

	return (0);
}
