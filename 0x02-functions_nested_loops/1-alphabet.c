#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 * main-print
 * Description: print alphabets
 * Retun:Always 0
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
}
