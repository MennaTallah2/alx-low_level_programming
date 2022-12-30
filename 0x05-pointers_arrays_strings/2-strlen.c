#include "main.h"
/**
 * _strlen - afunction returns the length
 * @s: string passed
 * Return: the length of the passed string s
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
