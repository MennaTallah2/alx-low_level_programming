#include "main.h"
/**
 * _memset - filling memory are with a constant byte
 * @s: the memory area
 * @b:the constant byte
 * @n:the number of bytes of memory to fill
 * Return:pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
