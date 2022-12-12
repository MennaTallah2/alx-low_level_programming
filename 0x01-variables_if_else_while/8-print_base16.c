#include <stdio.h>
/**
 * main-entry
 * Return:Always 0
 */
int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
	putchar(d % 10 + '0');
	}
	for (d = 'a'; d <= 'f'; d++)
	{
	putchar(d);
	}
	putchar('\n');

	return (0);
}
