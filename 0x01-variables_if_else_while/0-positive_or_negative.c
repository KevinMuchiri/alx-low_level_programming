#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - use to check for condition
 *
 * Description: return the results when conditions are met
 *
 * Return: return integer 0
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf( "%d is negative\n", n);
	}
	else if(n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return(0);
}
