//Iteration


#include<stdio.h>

int main()
{
    int iNo=723614;
    int iDigit=0;
    printf("___________________________________________\n");
   
    printf("Original value of iNo is:%d\n",iNo);
    printf("___________________________________________\n");
    
    while(iNo!=0)
    {
        printf("___________________________________________\n");
        iDigit=iNo%10;
        printf("iDigit is:%d\n",iDigit);
        iNo=iNo/10;
        printf("iNo is :%d\n",iNo);
    }   

    

      printf("___________________________________________\n");

    return 0;
}