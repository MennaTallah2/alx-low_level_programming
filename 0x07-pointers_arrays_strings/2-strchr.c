#include "main.h"
/**
 * _strchr - function that locates char in a string
 * @s:the string
 * @c:the character
 * Return:the first occurrence of c in s or null if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}
	return(s + 1);

}
