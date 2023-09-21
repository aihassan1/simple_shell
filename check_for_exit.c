#include "main.h"

/**
* check_for_exit - checks for "exit" string
* @argv: command arguments to the shell
*
* Description: Checks if the command is "exit" and exits
*               the shell if true and handles exit arguments
*/
void check_for_exit(char **argv)
{
int compare;
int exit_int;
int i;

if (argv == NULL || argv[0] == NULL)
{
return;
}
compare = strcmp("exit", argv[0]);
if (compare == 0)
{
if (argv[1] != NULL)
{
exit_int = string_to_int(argv[1]);
if (exit_int == 0)
{
for (i = 0; argv[i] != NULL; i++)
{
free(argv[i]);
}
free(argv);
exit(0);
}
else if (exit_int == -1)
{
perror("numeric argument required");
return;
}
else
{
for (i = 0; argv[i] != NULL; i++)
{free(argv[i]); }
free(argv);
exit(exit_int);
}}
for (i = 0; argv[i] != NULL; i++)
{free(argv[i]); }
free(argv);
exit(0);
}}
