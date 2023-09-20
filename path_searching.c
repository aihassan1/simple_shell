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
char *_cmd_path_two;
char *dir_with_cmd;
if (_cmd == NULL)
{return (NULL); }
if ((access(_cmd, X_OK)) == 0)
{
return (_strduplicate(_cmd)); }
path_cpy = _strduplicate(current_path);
if (path_cpy == NULL)
{return NULL; }
dir_with_cmd = strtok(path_cpy, ":");
while (dir_with_cmd != NULL)
{
_cmd_path = str_concat(dir_with_cmd, "/");
if (_cmd_path == NULL)
{
free(path_cpy);
free(_cmd_path);
return (NULL); }
_cmd_path_two = str_concat(_cmd_path, _cmd);
if (_cmd_path_two == NULL)
{
free(path_cpy);
free(_cmd_path);
return (NULL); }
if ((access(_cmd_path_two, X_OK)) == 0)
{
free(_cmd_path);
free(path_cpy);
return (_cmd_path_two); }
else
{
free(_cmd_path);
free(_cmd_path_two);
dir_with_cmd = strtok(NULL, ":"); }}
free(path_cpy);
return (NULL); }
