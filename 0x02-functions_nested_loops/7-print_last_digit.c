#include "main.h"
/**
 * print_last_digit - print the last digit
 * @num: int value to be checked
 * Description: divide number by 10 to get the last digit as a remainder
 * Return: int  value
 */
#include <stdio.h>

int print_last_digit(int num)
{
int last_digit = num % 10;
printf("%d", last_digit);
return (last_digit);
}
