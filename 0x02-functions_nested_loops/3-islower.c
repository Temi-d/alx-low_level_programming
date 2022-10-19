#include "main.h"

/**
 * _islower - shows 1 if input is lowercase. Shows 0 for other cases
 *
 * @c - The character in ASCII code
 *
 *  Return 1 - for lowercase
 *  Return 0 - if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
