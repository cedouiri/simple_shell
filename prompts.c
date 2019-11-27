#include "h_shell.h"

/**
 * prompt - prompts the user for commands
 * @p: ptr hold the string of commands
 * Return: 1
 */

int prompt(char **p)
{
	size_t size = 0;
	int length;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "simple_shell$ ", 6);
	length = getline(p, &size, stdin);
	if (length == EOF)
		free_as(-1, 1, *p);
	(*p)[length - 1] = '\0';
	if (*(*p) == '\0' || (*(*p) == '.' && (*p)[1] == '\0'))
	{
		free_as(99, 1, *p);
		return (-1);
	}
	else
		return (1);
}
