#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - test condition
 *
 * Description : prints results when conditions are met
 *
 * Return: return integer 0
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d and is 0\n", n);
	}
	else 
	{
		printf("Last digit of %d and is less than 0 and not 0\n", n);
	}
	return (0);
}
