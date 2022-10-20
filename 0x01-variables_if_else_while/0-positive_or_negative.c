#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* main - entry point of code */



/* Return: Always 0 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */
				if(n < 0)
				{
					printf("Number is negative\n");
				}
				else if (n > 0)
				{
					printf("Number is positive\n");
				}
				else
				{
					return (0);
				}
}
