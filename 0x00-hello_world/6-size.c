#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int l_long_int_type;
	float float_int;

	/*Size of Types*/
	printf("Size of a char: %zu bytes(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(l_long_int_type));
	printf("Size of a float: %zu byte(s)\n", sizeof(float_int));
	return (0);
}
