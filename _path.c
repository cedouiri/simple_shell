#include "h_shell.h"

/**
* _path - check if command is in the path
* @ch: array of char
* @e: array of env
* Return: pointer to the linked list
**/
void _path(char **ch, char **e)
{
	char *c1, *c2, *path;
	int i, start, last;

	c1 = _strcat("/", ch[0]);
	path = _getenv("PATH", e);
	if (path == NULL)
	{
		free(c1);
		exit(0);
	}
	start = i = last = 0;
	while (path[i])
	{
		if (path[i] == ':' || path[i + 1] == '\0')
		{
			if (path[i + 1] == '\0')
			{
				i += 1;
				last = 1;
			}
			else
				path[i] = '\0';
			c2 = _strcat(path + start, c1);
			if (access(c2, F_OK) == 0)
			{
				free(ch[0]);
				ch[0] = c2;
				free(c1);
				return;
			}
			free(c2);
			if (last)
				break;
			path[i] = ':';
			start = i + 1;
		}
		i += 1;
	}
	free(c1);
}
