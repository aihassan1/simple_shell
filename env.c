#include "main.h"

/**
 * check_env - check for the word "env" and prints environment variables
 * @args: command line args.
 * @env: environment variables.
 *
 * Description:
 *  function checks if the command is "env" and prints all the environment
 *  variables if it matches.|
 *  It uses _strcomp to compare the command with "env"
 *  and iterates through the environment variables and print them.
 *
 * Return: void.
 */
void check_env(char **args, char **env)
{
int compare;
int i = 0;

if (args[0] != NULL)
{
compare = _strcomp("env", args[0]);
if (compare == 0)
{

while (env[i] != NULL)
{
_printf("%s\n", env[i]);
i++;
}
}
else
{
return;
}
}
}

