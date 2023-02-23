#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of code
 * Return: 0
 */

int main(void)
{
	char lett;	
	for (lett = 'a'; lett <= 'z';  lett++)
	{
	if (lett != 'e' && lett != 'q')
	putchar(lett);
	}
	putchar('\n');

	return (0);
}
