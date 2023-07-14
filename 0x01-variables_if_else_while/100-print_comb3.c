#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two digits.
 * Digits are separated by comma and space.
 * Digits must be different.
 * 01 and 10 are considered the same combination.
 * Prints the smallest combination first.
 * Digits are printed in ascending order.
 * Uses putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	/* Outer loop for the first digit */
	for (i = 0; i < 10; i++)
	{
		/* Inner loop for the second digit */
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}

	/* Removing the last comma and space */
	putchar('\b');
	putchar('\b');
	putchar('\n');

	return 0;
}

