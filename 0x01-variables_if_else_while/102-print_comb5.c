#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 * Separated by space.
 * Numbers range from 0 to 99.
 * Combination separated by comma, followed by a space.
 * 00 01 and 01 00 are considered the same combination.
 * Numbers printed in ascending order.
 * Uses putchar.
 *
 * Return: (0) Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');

			if (!(i == 99 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

