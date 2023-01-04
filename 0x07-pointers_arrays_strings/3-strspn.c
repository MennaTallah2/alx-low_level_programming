#include "main.h"
/**
 * _strspn - function returns the length of a string
 * @s:number of bytes in the initial segment
 * @accept:character to check bytes with
 * Return: number of bytes in the initual segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	i = 1;
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*accept == *s)
			{
				return (i);
			}

			accept++;
		}
		s++;
		i++;
	}
}
