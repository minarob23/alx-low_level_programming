#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Determine if the last digit of a random number is > or < 5 , or is 0
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("greater than 5\n");
	else if (m == 0)
		printf("0\n");
	else if (m < 6 && m != 0)
		printf("less than 6 and not 0\n");
	return (0);
}
