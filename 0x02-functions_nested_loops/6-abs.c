#include "main.h"
/**
 * _abs - print the sign of number
 * @num: int value to be checked
 * Description: if number is negative multiply by -1
 * Return: int  value
 */
int _abs(int num)
{
if (num < 0)
return (-num);
else
return (num);
}
