//code to demonstrate the need of iteration


#include<stdio.h>

int main()
{
    int iNo=723614;
    int iDigit=0;
    printf("___________________________________________\n");
   
    printf("Original value of iNo is:%d\n",iNo);

    printf("___________________________________________\n");

    printf("___________________________________________\n");
    iDigit=iNo%10;
    printf("iDigit is:%d\n",iDigit);
    iNo=iNo/10;
    printf("iNo is :%d\n",iNo);

    printf("___________________________________________\n");
     iDigit=iNo%10;
    printf("iDigit is:%d\n",iDigit);
     iNo=iNo/10;
     printf("iNo is :%d\n",iNo);

     printf("___________________________________________\n");
     iDigit=iNo%10;
     printf("iDigit is:%d\n",iDigit);
     iNo=iNo/10;
     printf("iNo is :%d\n",iNo);

     printf("___________________________________________\n");
     iDigit=iNo%10;
     printf("iDigit is:%d\n",iDigit);
     iNo=iNo/10;
      printf("iNo is :%d\n",iNo);

      printf("___________________________________________\n");
     iDigit=iNo%10;
     printf("iDigit is:%d\n",iDigit);
     iNo=iNo/10;
      printf("iNo is :%d\n",iNo);

      printf("___________________________________________\n");
     iDigit=iNo%10;
     printf("iDigit is:%d\n",iDigit);
     iNo=iNo/10;
      printf("iNo is :%d\n",iNo);

      printf("___________________________________________\n");

    return 0;
}