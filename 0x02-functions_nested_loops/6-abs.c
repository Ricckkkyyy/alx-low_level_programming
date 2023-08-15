#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to compute the absolute value of.
 *
 * Return: The absolute value of n.
 */
int _abs(int n)
{
	/* using if esle statement to check the magnitude of number */
	if (n < 0) /* check if its negative */
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
