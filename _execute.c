#include "main.h"

/**
* _execute - Executes a command with the given arguments.
* @args: The command line arguments from terminal or a pipe.
* @env:  environment variables.
*
* Description:
* This function executes the specified command with the provided arguments.
* It uses fork to create a new process and
* execve to replace the child process
* with the specified command. It waits for the child process to finish.
* If an error occurs during execution,
* perror is used to print an error message.
*/
void _execute(char **args, char **env)
{
pid_t pid;
char *command;

if (args == NULL || args[0] == NULL || env == NULL)
{
return;
}

pid = fork();
if (pid == 0)
{
command = path_searching(args[0]);
if (command == NULL)
{
perror("path_searching");
exit(EXIT_FAILURE);
}
if (execve(command, args, env) == -1)
{
perror("execve");
}

free(command);
exit(EXIT_FAILURE);
}
else if (pid > 0)
{
int status;
waitpid(pid, &status, 0);
}

return;
}
