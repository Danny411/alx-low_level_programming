#include <stdio.h>
/**
 * main - Entry point
 * %zu: print the result returned by sizeof keyword/operator
 * sizeof: evaluates the the size of a variable
 * Return: result (success)
 */
int main(void)
{
	char charType;
	int intType;
	int longIntType;
	int longLongIntType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongIntType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
