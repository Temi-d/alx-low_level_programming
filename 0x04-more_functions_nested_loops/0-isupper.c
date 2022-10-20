#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase letters
 *
 * Return: 1 if c is uppercase. 0 if otherwise
 */

int _isupper(int c)
{
	if ( c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
