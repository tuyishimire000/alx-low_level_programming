#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of three digits.
 * Digits are separated by comma and space.
 * Digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination.
 * Prints the smallest combination first.
 * Digits are printed in ascending order.
 * Uses putchar function.
 *
 * Return: (0) Always 0 (Success)
 */
int main(void)
{
    int i, j, k;

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            for (k = j + 1; k < 10; k++)
            {
                putchar(i + '0');
                putchar(j + '0');
                putchar(k + '0');
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\b');
    putchar('\b');
    putchar('\n');

    return (0);
}

