#include "h_shell.h"

/**
 * free_as - free amounts of strings
 * @stat: status
 * @n: number of strings to free
 * Return: nothing to return
 */

void free_as(int stat, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i += 1)
	{
		p = va_arg(args, char *);
		free(p);
	}
	va_end(args);
	if (stat == 99)
		return;
	exit(0);
}
