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
	int stat, length, n = 0;
	size_t size = 0;
	pid_t ppid;
	(void)ac;

	if (ac > 1)
	{
		if (execve(av[1], av + 1, NULL) == -1)
		{
			perror("./shell");
			exit(0);
		}
	}
	while (!n)
	{
		if (isatty(fileno(stdin)))
			write(2, "simple-shell$", 6);
		ppid = fork();
		if (ppid == 0)
		{
			if ((length = getline(&p, &size, stdin)) == -1)
				n = 1;
			p[length - 1] = '\0';
			if (*p == '\0' || (!(str = str_tow(p))))
			{
				free(p);
				exit(0);
			}
			_path(str, e);
			if (str == NULL)
				perror("Error: string is NULL\n");
			if (execve(str[0], str, NULL) == -1)
			{
				perror("./shell\n");
				exit(0);
			}
		}
		else
		{
			wait(&stat);
			if (stat !=0 || n)
				break;
		}
	}
	printf("Ending \n");
	return (0);
}
