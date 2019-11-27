#include "h_shell.h"
/**
 * built_check - checks for built-in commands and execute them
 * @as: array of arguments
 * @e: array of env vars
 * Return: success: 1
 */
int built_check(char **as, char **e)
{
		_built _b[] = {
		{"env", print_env},
		{"exit", exit_s},
		{NULL, NULL}
	
		};
	int i;

	if (as[0] == NULL)
		return (0);
	for (i = 0; i < 2; i++)
	{
		if (_strcat(as[0], _b[i].cmd) == 0)
		{
		return (_b[i].p_f(as, e));
			break;
		}
	}
	return (0);
}
