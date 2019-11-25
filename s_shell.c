#include "h_shell.h"

/**
* main - Entry point
*
*
* Return: always 0
**/

int main(void)
{
	char *p = NULL;
	char **str = NULL;
	size_t size = 0;
	int length;
	int stat;
	pid_t ppid;

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
			if (execve(str[0], str, NULL) == -1)
				perror("Error\n");
		}
		else
			wait(&stat);
	}
	printf("Ending \n");
	return (0);
}
