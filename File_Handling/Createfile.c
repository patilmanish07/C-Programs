#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	char fname[30];
	int fd = 0;                //fileDescriptor(fd)
	
	printf("Enter the file name that want create\n");
	scanf("%s",fname);
	
	fd = creat(fname,0777);
	if(fd == -1)
	{
		printf("Unable to create file\n");
	}
    else
	{
        printf("File is succesfully created\n");
    }		
	return 0;
}	
