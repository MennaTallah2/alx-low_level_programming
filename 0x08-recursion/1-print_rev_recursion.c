#include "main.h"
/**
 * _print_rev_recursion - function that prints string in reverse
 * @s: pointer to the string value
 */
void _print_rev_recursion(char *s)
{
	while (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
