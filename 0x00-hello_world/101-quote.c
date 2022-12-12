#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
<<<<<<< HEAD
#include <string.h>
=======
>>>>>>> 73ea25e584ce7bf58680f8be087f2967e376b5fa
/**
 * main - Entry
 * Return: Always 1
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, strlen(str));
	return (1);
}
