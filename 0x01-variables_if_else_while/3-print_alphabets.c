#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program.
 *
 * This function prints the lowercase alphabet, then the uppercase alphabet,
 * followed by a newline.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* declaring and innitializing cases */
	char lowercase = 'a';
	char uppercase = 'A';
	/* Using the while loopfor lower cases */
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	/* using while loop for uppercases */
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	/* new line */
	putchar('\n');

	return (0);

}
