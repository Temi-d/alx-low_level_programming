#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a newline
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				putchar((c / 10) + '0');
				putchar((c % 10) + '0');
		}
		putchar('\n');
	}
}
