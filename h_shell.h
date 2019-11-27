#ifndef HEADER
#define HEADER
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdarg.h>
#include <signal.h>

/**
 * struct builtins - builtin command for shell
 * @cmd: cmd
 * @p_f: pointer to builtin func
 *
 *
 *Description: struct for builtin func and command
 */

typedef struct builtins
{
	char *cmd;
	int (*p_f)(char **as, char **e);
} _built;

int child_pid(void);
int parent(void);
char **str_tow(char *str);
void cpString(int e, char *s, char **wb);
void GetWord(char **w, char *str);
int WordCount(char *str);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_getenv(char *name, char **e);
char *_strcat(char *s1 char *s2);
int print_env(char **as, char **e);
void _path(char **ch, char **e);
void free_a(char **a);
void free_as(int stat, const unsigned int n, ...);
void sig_hand(int sig_n);
int _atoi(char *ch);
int exit_s(char **as, char **e);
int built_check(char **as, char **e);
int prompt(char **p);
#endif
