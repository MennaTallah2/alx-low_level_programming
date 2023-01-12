#include "main.h"
#include <stdio.h>
/**
 * main - function prints all the passed arguments
 * @argc: the number of the passed arguments
 * @argv: the array contains the passed arguments
 * Return: always 0 if success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
