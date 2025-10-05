#include<stdio.h>
#define Err_value -1
int factorial(int ino)
{
    int iFact =1;//
    if(ino < 0)
    {
        return Err_value;
    }
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
    if(iret == Err_value)
    {
        printf("invalid input");
    }
    else {
    printf("Factorial of given number is: %d",iret);
    }
    return 0;
}