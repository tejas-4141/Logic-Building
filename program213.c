#include<stdio.h>

int main()
{
    char Name[] = {'\0'};

    printf("Enter your name : \n");
    scanf("%[^'\n']s",Name);

    printf("Hello : %s\n",Name);
    
    return 0;
}