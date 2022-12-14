#include "main.h"

/**
 * times_table - prints the times table of 9,
 */

void times_table(void)
{
	int i, j, multiply;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	multiply = i * j;
	if (multiply > 9)
	{
	_putchar(multiply / 10 + '0');
	}
	else
	{
	_putchar('0');
	}
	_putchar(multiply % 10 + '0');
	if (j == 9)
	{
	_putchar('\n');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	}
}
