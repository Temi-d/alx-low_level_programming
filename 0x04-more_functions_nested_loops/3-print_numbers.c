#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9, followed by a newline
 *
 * Return: 0 to 9, followed by newline
 */

void print_numbers(void)
{
	int i;

		for (i = 0; i <= 9; i++)
			putchar(i + '0');
		putchar('\n');
}
