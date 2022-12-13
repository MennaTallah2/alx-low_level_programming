#include <stdio.h>
#include "main.h"
/**
 * _isalpha- checks of the value is alphabet or not.
 * @c: the intered value to be checked.
 * Return: 1 if alphabet 0 otherwise.
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	return (0);
}
