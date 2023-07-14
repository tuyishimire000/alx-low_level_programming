#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Assigns a random number to the variable n and prints the last
 *              digit of n along with a corresponding message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0)); /* Seed the random number generator with the current time */

    n = rand() - RAND_MAX / 2; /* Assign a random number to n */

    printf("Last digit of %d is %d and is ", n, abs(n) % 10);

    if (abs(n) % 10 > 5)
        printf("greater than 5\n");
    else if (abs(n) % 10 == 0)
        printf("0\n");
    else
        printf("less than 6 and not 0\n");

    return (0);
}

