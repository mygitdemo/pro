#include "comm.h"

char buff1[11];

int main()
{
	int rfd;
	int wfd;
	int len; 

	if( (rfd = open("./tmp.hole", O_RDWR)) == -1)
		printf("can not open hole file.\n");
	if( (wfd = open("./tmp.nohole", O_RDWR)) == -1)
		printf("can not open nohole file.\n");
	 
	while ( (len = read(rfd, buff1,17)) )
	{
		printf("%d\n%s\n",len, buff1);
		if(write(wfd, buff1,len) == -1)
			return 0;
	}

	printf("write success.\n");
	return 0;
}