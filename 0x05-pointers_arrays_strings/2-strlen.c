#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string passed to calc its length
 * Rerutn: length value
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
