#include "main.h"
/**
 *times_table - prints table 9
 * Description: use nested loop.
 * Return: void
 */
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int result = i * j;
if (result >= 10)
{
_putchar('0' + result / 10);
_putchar('0' + result % 10);
}
else
{
_putchar('0' + result);
}
_putchar(' ');
}
_putchar('\n');
}
}

