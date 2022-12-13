#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10-ptints the alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int x, i;

	for (i = 0; i < 10; i++)
	{
	for (x = 'a'; x <= 'z'; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
	}
}
