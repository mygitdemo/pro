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
	//prox��������   16��
	if( (status = system("who; exit 44")) )
		err_sys("system() error");

	pr_exit(status);
	//pro1  21��
	return 0;
}