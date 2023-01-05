#include "main.h"
/**
 * is_prime_number - function discovers the prime num
 * @n: number to be checked
 * Return: 1 if is prime 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if ((n % 2 == 0) || (n % 3 == 0))
		return (0);
	else if ((n % 5 == 0) || (n % 7 == 0) || (n % 9 == 0))
		return (0);
	else
		return (1);
}
