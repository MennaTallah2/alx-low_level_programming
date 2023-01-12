#include "main.h"
#include <stdio.h>
/**
 * main - function prints the number of arguments passed
 * @argc: number of arguments
 * @argv: the array of arguments passed
 * Return: always 0 if success
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
