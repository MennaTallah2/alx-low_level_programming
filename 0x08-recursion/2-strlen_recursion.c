#include "main.h"
/**
 * _strlen_recursion - function return the length of a string
 * @s: pointer to the string value.
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
	{
		return (0);
	}
	return (i +  _strlen_recursion(s + 1));
}
