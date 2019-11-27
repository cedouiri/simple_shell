#include "h_shell.h"

/**
 * _atoi - convert a string to an integer
 * @ch: string to be converted
 * Return: integer
 */
int _atoi(char *ch)
{
	int i, s;
	unsigned int n;

	n = i = 0;
	s = 1;
	while ((ch[i] < '0' || ch[i] > '9') && ch[i] != '\0')
	{
		if (ch[i] == '-')
			s *= -1;
		i++;
	}
	for (; ch[i] != '\0' && ch[i] >= '0' && ch[i] <= '9'; i++)
	{
		n = n * 10 + (ch[i] - '0');
	}
	n *= s;
	return (n);
}
