#ifndef __MAIN_H__
#define __MAIN_H__

#include <unistd.h>
#include <stdio.h>

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);



#endif 
