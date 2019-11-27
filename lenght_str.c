#include "h_shell.h"

/**
 * length_str - length of a string
 * @ch: pointer to a string
 * Return: length of string
 */
int lenght_str(char *ch)
{
	int i = 0;

	while (ch[i])
	{
		i++;
	}
	return (i);
}
