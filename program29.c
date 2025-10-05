//imp
#include<stdio.h>
#define Err_value -1
unsigned long  factorial(unsigned int  ino) {
    unsigned long iFact =1;//
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
    unsigned int ivalue = 0;
    unsigned long  iret = 0;
    printf("Enter the number");
    scanf("%u",&ivalue);
    iret= factorial(ivalue);
    if(iret == Err_value)
    {
        printf("invalid input");
    }
    else {
    printf("Factorial of given number is: %lu",iret);
    }
    return 0;
}

//overflow
