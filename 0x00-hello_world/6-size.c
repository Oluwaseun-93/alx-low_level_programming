#include <stdio.h>

/**
 * main - a program that prints the size of various computer types
 *
 * Return: 0 (success)
 */

int main(void)
{
	
printf("size of char: %lu byte(s)\n", sizeof(char));
printf("size of int: %lu byte(s)\n", sizeof(int));
printf("size of long int: %lu byte(s)\n", sizeof(long int));
printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of float: %lu byte(s)\n", sizeof(float));
return (0);

}
