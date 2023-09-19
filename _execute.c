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
    *
   * Return: The exit status of the executed command,
   *  -1 if an error occurs,
    * -2 if the parent process failed, or 1 if fork failed.
 */
int _execute(char **args, char **env)
{
pid_t pid, wpid;
int status;
char *command;
if (args == NULL)
{
perror("Null tokens");
return (-1);
}
pid = fork();
if (pid == 0)
{
command = path_searching(args[0]);
if (command != NULL)
{
execve(command, args, env);
free(command);
perror("execve failed");
exit(EXIT_FAILURE);
}
else
{
perror("command not found");
exit(EXIT_FAILURE);
}}
else if (pid > 0)
{
do {
wpid = waitpid(pid, &status, WUNTRACED);
if (wpid == -1)
{
perror("waitpid failed for the parent");
return (-2);
}} while (!WIFSIGNALED(status) && !WIFEXITED(status));
return (WEXITSTATUS(status));
}
else
{
perror("fork failed");
return (-1);
}}