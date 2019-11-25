#include "h_shell.h"

/**
* cpString - clips a word
* @e: the end of the word
* @s: the string to clip the word from
* @wb: the box where we store the words
*/
void cpString(int e, char *s, char **wb)
{
	int i;
	(*wb) = malloc(sizeof(char) * e + 1);
	for (i = 0; i < e; i += 1)
		(*wb)[i] = s[i];
	(*wb)[i] = '\0';
}
