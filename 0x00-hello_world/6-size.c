#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("The size of a char is: %lu byte(s)\n", sizeof(c));
	printf("The size of an int is: %lu byte(s)\n", sizeof(i));
	printf("The size of a long int is: %lu byte(s)\n", sizeof(li));
	printf("The size of a long long int is: %lu byte(s)\n", sizeof(lli));
	printf("The size of a float is: %lu byte(s)\n", sizeof(f));

	return(0);
}
