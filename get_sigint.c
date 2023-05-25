#include "main.h"

/**
 * get_sigint - Ctrl + C call in prompt management
 * @sig: handler of signals
 */
void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}
