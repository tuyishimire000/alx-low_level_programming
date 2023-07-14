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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
