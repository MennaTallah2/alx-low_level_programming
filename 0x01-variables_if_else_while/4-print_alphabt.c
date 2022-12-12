#include <stdio.h>
/**
 * main-entry
 * Return: Alwaya 0
 */
int main(void)
{
	char r;

	for (r = 'a'; r <= 'z'; r++)
	{
	if (r == 'q' || r == 'e')
	{}
	else
	{
	putchar(r);
	}
	}
	putchar('\n');
	return (0);
}
