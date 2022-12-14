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
	_putchar(multiply % 10 + '0');
	_putchar(',');
	_putchar(' ');
	}
	_putchar('$');
	}
}
