#ifndef _COMM_H_
#define _COMM_H_


#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <errno.h>

int err_sys(const char *err);
void charatatime(char *str);
int system(const char *cmdstring);
void pr_exit(int status);

#endif