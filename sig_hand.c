#include "h_shell.h"

/**
* sig_hand - a func to catch signals
* @sig_n: signal number
*
**/

void sig_hand(int sig_n)
{
	if (sig_n == SIGINT)
	{
		write(STDOUT_FILENO, "\n", 1);
		write(STDOUT_FILENO, "simple_shell$", 6);
	}
}
