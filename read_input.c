#include "main.h"
/**
* _read_input - Read input from stdin or a pipe
* @issaty: a return value from _promt function
* to check if input is interactive
	    *
	    * Return: the string containing the input that was read,
	    *         or NULL on error or end of input.
	    */
char *_read_input(int issaty)
{
size_t line_size = 0;
char *line = NULL;

if (issaty == 0)
{
if (getline(&line, &line_size, stdin) == -1)
{
return (NULL);
}
line[_stringspan(line, "\n")] = '\0';
}

else if (issaty == 1)
{
if (getline(&line, &line_size, stdin) == -1 || line == NULL)
{
exit(0);
}
else
{
line[_stringspan(line, "\n")] = '\0';
}
}
return (line);
}
