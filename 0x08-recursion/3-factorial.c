#include "main.h"
/**
 * factorial - function that claculate the factorial of agiven num.
 * @n: the number to calc its factorial
 * Return: the result of the factorial , -1 if n lower than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
