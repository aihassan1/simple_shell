#ifndef ____MAIN_SHELL___H
#define ____MAIN_SHELL___H


#include <dirent.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int _prompt(void);
char *_read_input(int issaty);
char **_tokenize(char *line, char *delimiters);
void _execute(char **args, char **env);
void check_for_exit(char *argv[]);
int string_to_int (char *str);
char *path_searching(char *_cmd);

int _printf(const char *format, ...);
char *str_concat(char *s1, char *s2);
char *_strduplicate(char *str);
int _strlen(char *str);
char *_strcopy(char *_dest, const char *_source);
int _strcomp(char *s1, char *s2);
size_t _stringspan(const char *string, const char *stop_string);
void free_tokens(char **tokens);
#endif
