#include "h_shell.h"

/**
* main - Entry point
* @ac: number of arguments of av
* @av: array of arguments
* Return: always 0
**/

int main(int ac, char *av[], char **e)
{
	char *p = NULL;
	char **str = NULL;
	int stat, length;
	size_t size = 0;
	pid_t ppid;
	(void)ac;

	while (1)
	{
		ppid = fork();
		if (!ppid)
		{
			printf("Shell$: ");
			length = getline(&p, &size, stdin);
			if (length == -1)
			{
				dprintf(2, "Exiting\n");
				free(str);
				exit(-1);
			}
			p[length - 1] = '\0';
			str = str_tow(p);
			_path(str, e);
			if (execve(str[0], str, NULL) == -1)
				perror("Error\n");
		}
		else
			wait(&stat);
	}
	printf("Ending \n");
	return (0);
}
