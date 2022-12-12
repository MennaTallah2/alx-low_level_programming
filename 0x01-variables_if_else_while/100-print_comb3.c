#include <stdio.h>
/**
 * main- entry
 * Description: combining two numbers
 * Return:Always 0
 *
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 8; a++)
	{
	for (b = a + 1; b <= 9; b++)
	{
	putchar(a % 10 + '0');
	putchar(b % 10 + '0');
	if (a == 8 && b == 9)
	{
	}
	else
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
