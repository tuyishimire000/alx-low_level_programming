#include "main.h"
/**
 * print_last_digit - print the last digit
 * @num: int value to be checked
 * Description: divide number by 10 to get the last digit as a remainder
 * Return: int  value
 */
int print_last_digit(int num)
{
int last_digit;
if (num < 0)
{
num = num * (-1);
}
last_digit = num % 10;
return (last_digit);
}
