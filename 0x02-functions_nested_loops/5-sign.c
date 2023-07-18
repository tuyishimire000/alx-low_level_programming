#include <stdio.h>
#include "main.h"
/**
 * print_sign - print the sign of number
 * @n: int value to be checked
 * Description: show if it's negative/positive or zero
 * Return: int  value
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
