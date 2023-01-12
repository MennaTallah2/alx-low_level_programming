#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - function multipy two numbers passed
 * @argc: the number of the passed arguments
 * @argv: the array of the passed arguments
 * Return: 0 if succes ,1 if error (not passess arguments)
 */
int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
