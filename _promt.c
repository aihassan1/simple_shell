#include "main.h"

/**
 * _prompt - Displays a prompt when getting input from terminal
 *
 * Return: 1 if input is from a terminal, 0 otherwise.
 */

int _prompt(void)
{
while (1)
{
if (isatty(STDIN_FILENO))
{
_printf("#cisfun ");
return (1);
}
return (0);
}
}

