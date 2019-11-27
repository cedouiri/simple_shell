#include "h_shell.h"

/**
* WordCount - counts words in a string
* @str: pointer that point to a string
* Return: number of words in a string
**/
int WordCount(char *str)
{
	unsigned int count_w, i;
	int find;

	if (str == NULL || *str == '\0')
		return (-1);
	find = i = count_w = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i + 1] == '\0')
		{
			if (count_w == 0 && str[i + 1] == '\0' && str[i] == ' ')
				return (-1);
			if (find)
			{
				count_w += 1;
				find = 0;
			}
			i += 1;
			continue;
		}
		else
			find = 1;
		i += 1;
	}
	return (count_w);
}
