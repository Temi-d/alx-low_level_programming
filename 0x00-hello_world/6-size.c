#include <stdio.h>
/**
 * main - Entry point of code
 * int - integers
 * char - character literal
 * float -floating point
 * long int - Long integer
 * long long int - Long long integer
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("The size of a char is: %lu bytes\n", (unsigned long)sizeof(c));
	printf("The size of an int is: %lu bytes\n", (unsigned long)sizeof(i));
       printf("The size of a long int is: %lu bytes\n", (unsigned long)sizeof(li));
       printf("The size of a long long int is: %lu bytes\n", (unsigned long)sizeof(lli));
       printf("The size of a float is: %lu bytes\n", (unsigned long)sizeof(f));

       return (0);
}

