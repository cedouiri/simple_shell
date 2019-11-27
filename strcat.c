#include "h_shell.h"
/**
 * _strcat -  concatenates two strings to new allocated memory
 * @dest: string to be appended
 * @src: string to be appended from
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *sc;
	int i, j;

	if (dest == NULL)
		dest = "";
	if (src == NULL)
		src = "";
	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
		;
	sc = malloc((sizeof(char) * i) + (sizeof(char) * j) + 1);
	if (sc == NULL)
		exit(0);
	for (i = 0; dest[i] != '\0'; i++)
		sc[i] = dest[i];
	for (j = 0; src[j] != '\0'; j++)
		sc[i + j] = src[j];
	sc[i + j] = '\0';
	return (sc);
}
