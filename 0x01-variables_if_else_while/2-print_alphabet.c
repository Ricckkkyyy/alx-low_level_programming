#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program.
 *
 * This function prints the lowercase alphabet followed by a newline.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* declaring the letter */
	char letter = 'a';
	/* using the while loop to picklowercase letters */
	while (letter <= 'z')
	{
	putchar(letter);
	letter++; /* for the increament */
	}
	/* printing a new line */
	putchar ('\n');

	return (0);

}
