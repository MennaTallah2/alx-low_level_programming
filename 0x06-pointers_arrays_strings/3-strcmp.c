#include "main.h"
/**
 * _strcmp - Function that compares two strings.
 * @s1: First string
 * @s2: Second string
 * Return: Value less than 0 if string is less than the other
 * Value greater than 0 if string is greater then the other
 * 0 if strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int count, val;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}
	val = s1[count] - s2[count];
	return (val);
}
