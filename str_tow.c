#include "h_shell.h"

/**
* str_tow - splits a string and returns an array
* @str: pointer to a string
* Return: pointer that point to array
**/

char **str_tow(char *str)
{
	char **w;
	int count_w;

	count_w = WordCount(str);
	if (count_w == -1)
		return (NULL);
	w = malloc(sizeof(char *) * (count_w + 1));
	if (!w)
	{
		free(w);
		return (NULL);
	}
	GetWord(w, str);
	return (w);
}
