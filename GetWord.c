#include "h_shell.h"

/**
* GetWord - get a word from a string to cpy
* @str: pointer that point to a string
* @w: pointer that point to pointer that point to a words
* Return: array of words
**/
void GetWord(char **w, char *str)
{
	int i, start, find, count_w;

	count_w = i = start = find = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i + 1] == '\0')
		{
			if (find)
			{
				if (str[i + 1] == '\0')
					i += 1;
				cpString(i - start, str + start, w + count_w);
				if (!(w + count_w))
					exit(-2);
				count_w += 1;
				start = i + 1;
				find = 0;
			}
				if (str[i] == '\0')
					continue;
			i += 1;
			continue;
		}
		else
		{
			if (!find)
				start = i;
			find = 1;
		}
		i += 1;
	}
	w[count_w] = NULL;
}
