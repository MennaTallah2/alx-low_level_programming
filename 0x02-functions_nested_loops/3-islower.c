#include <stdio.h>
#include "main.h"

/**
 * _islower - check the value is lowercase or not.
 * @c: it will be the intered value.
 *
 * Return: 1 if the character is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
