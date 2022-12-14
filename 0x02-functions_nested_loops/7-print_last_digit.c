#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: the entered value
 *
 * Return: retutn the last digit
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (n < 0)
	{
	lastDigit = -1 * lastDigit;
	}
	_putchar(lastDigit + '0');

	return (lastDigit);
}
