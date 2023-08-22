#include "main.h"

/**
 * swap_int - swaps the values of int a and int b
 * @a: first int to swap
 * @b: second int to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp; /* Store the value of the first integer */

	 temp = *a; /* Assign the value of the second integer to the first */
	*a = *b;
	*b = temp;
}
