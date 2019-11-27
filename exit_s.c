#include "h_shell.h"

/**
 * exit_s - exit from the shell
 * @as: array of arguments
 * @e: array of environment variables
 * Return: 1
 */

int exit_s(char **as, char **e)
{
	int stat;
	(void)e;

	stat = 0;
	if (as[1])
		stat = _atoi(as[1]);
	free_a(as);
	exit(stat);
}