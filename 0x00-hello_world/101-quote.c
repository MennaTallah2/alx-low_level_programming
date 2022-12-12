#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>

/**
 * main - entry
 * Return: Always 1
 */
int main(void)
{
	char text[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2,text,strlen(text));
	return (1);
}
