#include "main.h"

/**
 * read_line - reads the input string.
 *
 * @i_eof: value of getline function returns
 * Return: input string
 */
char *read_line(int *i_eof)
{
	char *input = NULL;
	size_t bufsize = 0;

	*i_eof = getline(&input, &bufsize, stdin);

	return (input);
}
