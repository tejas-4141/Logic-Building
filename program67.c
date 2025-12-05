//Iteration


#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit=0;
    printf("Enter number:\n");
    scanf("%d",&iNo);

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
}

int main()
{
    int iValue=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);
    

    

    return 0;
}