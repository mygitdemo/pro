#include "comm.h"

int main()
{
	pid_t pid;

	if( (pid = fork()) < 0)
		err_sys("fork error");
	else if(pid == 0)
		charatatime("output from child");
	else
		charatatime("output from parent");
		
		return 0;
}