#include <stdio.h>
/**
 * main - A program that print the size of various types on the computer
 * Return: 0 (success)
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float %zu byte(s)\n", sizeof(float));
	retun (0);
}
