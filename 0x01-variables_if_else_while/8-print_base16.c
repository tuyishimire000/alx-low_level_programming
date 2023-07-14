#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all numbers of base 16 (hexadecimal) in lowercase,
 *              followed by a new line, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}

	putchar('\n');

	return (0);
}
