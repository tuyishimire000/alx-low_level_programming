#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Assigns a random number to the variable n and prints whether
 *              the number is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0)); /* Seed the random number generator with the current time */

    n = rand() % (2 * RAND_MAX + 1) - RAND_MAX; /* Assign a random number to n */

    printf("The number %d is ", n);

    if (n > 0)
        printf("positive\n");
    else if (n < 0)
        printf("negative\n");
    else
        printf("zero\n");

    return 0;
}
