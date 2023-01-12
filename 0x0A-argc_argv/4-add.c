#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - function return the addition of all passed numbers
 * @argc: the number of passed arguments
 * @argv: the array contains the passes argumtens
 * Return: 0 if success ,1 if passed symbol value
 */
int main(int argc, char **argv)
{
	int i, j, sum;

	sum = 0;
	if (argc < 3)
	{
		printf("0\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		if (argv[i][j] < '0' || argv[i][j] > '9')
		{
			printf("Error\n");
			return (1);
		}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	}
	return (0);
}
