#include "main.h"
/**
 * _strspn - function returns the length of a string
 * @s:number of bytes in the initial segment
 * @accept:character to check bytes with
 * Return: number of bytes in the initual segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i,j,k;

	i = 0;
	j = 0;
	k = 0;
	while (s[j] != '\0')
	{
		while (accept[k] != '\0')
		{
			if (s[j] == accept[k])
			{
				i++;
				break;
			}

			k++;
		}
		if (accept[k] == '\0')
			break;
		j++;
	}
	return (i);
}
