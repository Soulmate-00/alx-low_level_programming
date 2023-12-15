#include <stdio.h>

/**
 * main - Entry point main function
 *
 *Return: Always 0
*/
int main(void)
{
	int base_16;
	char lr;

	for (base_16 = 0; base_16 <= 10; base_16++)
		putchar((base_16 % 10) + '0');
	for (lr = 'a'; lr <= 'f'; lr++)
		putchar(lr);
	putchar('\n');

	return (0);
}
