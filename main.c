#include "main.h"

/**
* main - the main function of the shell
* @argc: The number of command line arguments
* @argv: An array of strings containing the command line arguments
* @env: An array of strings containing the environment variables
*
* Return: Always 0
*/
int main(int argc, char *argv[], char *env[])
{
char *line = NULL;
char **tokens = NULL;

(void)argc;
(void)argv;

while (1)
{
line = _read_input(_prompt());

if (line == NULL)
{
exit(0);
}

tokens = _tokenize(line, " \n");
if (tokens == NULL)
{
free(line);
exit(1);
}
free(line);

check_for_exit(tokens);
_execute(tokens, env);

if (tokens != NULL)
{
free_tokens(tokens);
}
return (0);
}
}
