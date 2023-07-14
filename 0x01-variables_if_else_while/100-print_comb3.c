#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two digits.
 * Comma and space separate the digits.
 * Digits must be different.
 * 01 and 10 are considered the same combination.
 * Smallest combination is printed first.
 * Digits are printed in ascending order.
 * Uses putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			/* Print comma and space if not last combination */
			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return 0;
}

