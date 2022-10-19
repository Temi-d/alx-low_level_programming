#include "main.h"

/**
 * Print_alphabet_x10 - Prints 10 times the alphabeets in lowercase
 *
 * Return:Always 0.
 */

void print_alphabet_x10(void)
{
	int i, a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 97; a < 123; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
