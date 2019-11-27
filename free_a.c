#include "h_shell.h"

/**
* free_a - free an array
* @a: pointer that point to array
* Return: nothing
**/

void free_a(char **a)
{
	int i;

	if (!a)
		exit(0);
	i = 0;
	while (a[i])
	{
		free(a[i]);
		i += 1;
	}
	free(a);
}
