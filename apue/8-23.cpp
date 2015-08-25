#include "comm.h"

int main()
{
	int status;

	if( (status = system("date")) < 0)
		err_sys("system() error");

	pr_exit(status);

	if( (status = system("nosuchcommand")) < 0)
		err_sys("system() error");

	pr_exit(status);
	//prox新增的行   16行
	if( (status = system("who; exit 44")) )
		err_sys("system() error");

	pr_exit(status);
	//pro1  21行
	return 0;
}