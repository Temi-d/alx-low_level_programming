#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - Entry point of code
 * write - passes string to output
 * Return: 0
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	exit(1);
}
