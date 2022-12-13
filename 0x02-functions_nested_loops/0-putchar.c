#include <stdio.h>
#include "main.h"
/**
 * main-entry
 * Description-print putchar
 * Return - Always 0
 */
int main(void)
{
	char putchar[] = "_putchar";
	int i = 0;
	
	while (putchar[i] != '\0')
	{
	_putchar(putchar[i]);
	i++;
	}
	_putchar('\n');
	return (0);
}
