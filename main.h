#ifndef ____MAIN_SHELL___H
#define ____MAIN_SHELL___H

#define BUFFER_SIZE 100000
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
int _execute(char **args, char **env);
void check_for_exit(char *argv[]);
int string_to_int (char *str);
char *path_searching(char *_cmd);



#endif
