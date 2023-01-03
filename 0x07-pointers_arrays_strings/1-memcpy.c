#include "main.h"
/**
 * _memcpy - function that copies from mem area to another
 * @dest:the destination mem area
 * @src: the source mem area
 * @n: the number of bytes
 * Return: pointer to the des.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);
}
