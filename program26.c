#include<stdio.h>
int factorial(int ino)
{
    int iFact =1;//
    for (int i = 1; i<=ino ;i++ )
    {
         iFact = iFact * i;
    }
    return iFact;
}
int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("Enter the number");
    scanf("%d",&ivalue);
    iret= factorial(ivalue);
    printf("Factorial of given number is: %d",iret);


    return 0;
}