#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
char *_strdup(char *str);
char *argstostr(int ac, char **av);
char *str_concat(char *s1, char *s2);
char *create_array(unsigned int size, char c);

#endif