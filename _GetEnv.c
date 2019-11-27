#include "h_shell.h"

/**
* _getenv - a function that gets an environment variable
* @name: name of the requested variable
* @e: environment variable list
* Return: pointer to env var
**/
char *_getenv(const char *name, char **e)
{
	int i, j;
	int result, length;

	i = j = 0;
	while (e[i] != NULL)
	{
		result = _strcmp(name, (const char *)e[i]);
		if (result == 1)
		{
			length = _strlen(e[i]);
			while (e[i][j] != '=')
				j += 1;
			length -= j;
			return (e[i] + j + 1);
		}
		i++;
	}
	return (NULL);
}
