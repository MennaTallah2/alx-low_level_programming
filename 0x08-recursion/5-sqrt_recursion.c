#include "main.h"
/**
 * sqrt - function calculates the square root
 * @num: the number to calc its root
 * @root: the root Value
 * Return: the value of the root calculated
 */
int sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	else if (root * root > num)
		return (-1);
	else
		return (sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - fuc calculates square root of a given num
 * @n: number to calc its squarae root
 * Return: the root value. -1 it thers no natural square root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqrt(n, root));

}
