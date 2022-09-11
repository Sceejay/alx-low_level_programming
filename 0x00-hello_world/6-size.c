#include <stdio.h>


/**
 * main - Entry point of the program
 *
 * Return: returns 0 Always unless specified not to
 */
int main(void)
{
	char chars;
	int integer;
	long int long_integers;
	float floating_point;
	long long int integers;

	printf("Size of a char: %zu byte(s)\n", sizeof(chars));
	printf("Size of an int: %zu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long_integers));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(integers));
	printf("Size of a float: %zu byte(s)\n", sizeof(floating_point));
	return (0);
}
