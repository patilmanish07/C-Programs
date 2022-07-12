#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	char fname[30];
	int fd = 0, ret = 0;
	char Data[11];
	
	printf("Enter the file name that you want to open\n :");
	scanf("%d",&fname);
	
	fd = open(fname,O_RDWR);
	if(fd == -1)
	{
			printf("Unable to open the file");
			return -1;
	}
	else
	{
			printf("file successfully opened fd :%d\n",fd);
	}
	
	read(fd,Data,6);
	
	write(1,Data,6);
	
	close(fd);
	
	return 0;
}