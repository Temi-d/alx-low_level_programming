#include "main.h"

/**
 * _islower - Checks for lowercase etters
 * @c: Character in ASCII code
 * Return: 1 if lowercase, 0 if otherwise
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
