#include <stdio.h>
#include "main.h"
/**
 * print_sign - Prints the sign of the number.
 * @n: the number to be tested.
 *
 * Return: 1 if it's positive,
 * and -1 if it's negative,
 * and 0 if it is 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar(n % 10 + '0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
