#include "main.h"
/**
 * _pow_recursion - function calculate the pow
 * @x: rhe base number
 * @y: the power number
 * Return: the value of x power y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
