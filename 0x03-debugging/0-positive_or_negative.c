#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main- print whethver  the number stored in variable positive or negative.
 *
 * Return: Always 0.
 */
int positive_or_negative(int n)
{


	/*srand(time(0));*/
	/*n = rand() - RAND_MAX / 2;*/

	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
