#include<stdio.h>
#include<fcntl.h>


int main()
{
    int fd=0;
    char FileName[20];

    printf("Enter the name of file that you want Create:\n");
    scanf("%s",FileName);

    fd=creat(FileName,0777);
    if(fd==-1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File Successfully Created with fd:%d\n",fd);
    }


    return 0;
}