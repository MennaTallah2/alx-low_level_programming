#include <stdio.h>
/**
 * main - enrey
 * Return: Always 0
 */

int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
	putchar(d % 10);
	}
	putchar('\n');
	return (0);
}