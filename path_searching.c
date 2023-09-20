#include "main.h"

/**
* path_searching - Searches the PATH for a command.
* @_cmd: The command to search for.
*
* Return: The full path to the command, or NULL if the command is not found.
*/

char *path_searching(char *_cmd)
{
char *current_path = getenv("PATH");
char *path_cpy;
char *_cmd_path;
char *dir_with_cmd;

if ((access(_cmd, X_OK)) == 0)
{return (_cmd); }
if (_cmd == NULL)
{
return (NULL);
}
path_cpy = strdup(current_path);
dir_with_cmd = strtok(path_cpy, ":");

while (dir_with_cmd != NULL)
{
_cmd_path = malloc(strlen(dir_with_cmd) + strlen(_cmd) + 2);
if (_cmd_path == NULL)
{
free(path_cpy);
return (NULL);
}

strcpy(_cmd_path, dir_with_cmd);
strcat(_cmd_path, "/");
strcat(_cmd_path, _cmd);

if ((access(_cmd_path, X_OK)) == 0)
{
free(path_cpy);
return (_cmd_path);
}

free(_cmd_path);
dir_with_cmd = strtok(NULL, ":");
}

free(path_cpy);
return (NULL);
}
