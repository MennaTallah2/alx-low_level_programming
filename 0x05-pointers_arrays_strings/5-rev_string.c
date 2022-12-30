#include "main.h"
#include <strign.h>
/**
 * rev_string - a function that reveses the strign
 * @s: is the pointer for the string value
 */
void rev_string(char *s)
{
	int n = strlen(s);
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = s[n - i - 1];
		s[n - i - 1] = s[i];
		s[i] = temp;

	}

}
