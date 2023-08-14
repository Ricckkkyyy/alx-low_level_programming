#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - function that prints the last digit of a random number
 *
 * Return: 0 (sucess)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* printing the random genertaed number */
	/* calculating the last digit */
	last_digit = n % 10;
	/* printing the random genertaed number */
	printf("The last digit of %d is %d ", n, last_digit);
	/* printing the message basd on the calculation */
	if (last_digit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
