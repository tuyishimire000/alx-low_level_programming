#include <stdlib.h>
#include<stdio.h>
#include <time.h>
/* more headers goes there */

/* Entry point 
 * generate random number
 * check whether number is positive or negative or whether it'sequal to zero
 * print the value of the number 
 * give the conclusion as the out put 
 * return 0 always */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d",n);
	if (n > 0){
		printf("is positive");
	}else if(n == 0){
	        printf("is zero");
	}else{
	        printf("is negative");
	}
	return (0);
}
