#include <stdio.h>
/**
 * main -entry
 * Return: Alwaya 0
 */

int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
	putchar(d % 10 + '0');
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
