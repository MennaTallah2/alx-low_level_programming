#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
/**
 * main - entry
 * Return: Always 1
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, str, strlen (str));
	return (1);
}
