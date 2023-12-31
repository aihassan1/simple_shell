#include "main.h"
/**
 * _tokenize - Splits a string into an array of tokens.
 * @line: The input string to tokenize.
 * @delimiters: A string containing delimiters to split the input line.
 *
 * Return: An array of strings with the tokens, or NULL on failure.
 */
char **_tokenize(char *line, char *delimiters)
{
char *token, *line_copy;
int i, token_counter = 0;
char **tokenized_args;
if (line == NULL)
{
return (NULL);
}
line_copy = malloc(_strlen(line) + 1);
if (line_copy == NULL)
{
return (NULL);
}
_strcopy(line_copy, line);
token = strtok(line_copy, delimiters);
while (token != NULL)
{
token_counter++;
token = strtok(NULL, delimiters);
}
token_counter++;
tokenized_args = malloc(token_counter *sizeof(char *));
if (tokenized_args == NULL)
{
return (NULL); }
token = strtok(line, delimiters);
for (i = 0; token != NULL; i++)
{
tokenized_args[i] = malloc(_strlen(token) + 1);
if (tokenized_args[i] == NULL)
{return (NULL); }
_strcopy(tokenized_args[i], token);
token = strtok(NULL, delimiters);
}
tokenized_args[token_counter - 1] = NULL;
free(line_copy);
return (tokenized_args);
}
