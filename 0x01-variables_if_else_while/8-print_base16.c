#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char i;

	for (i = '0' ; i >= 16 ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
