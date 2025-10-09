#include<stdio.h>
#include<stdbool.h>
bool checkprime(int ino)
{
    bool bflaged = false;
    if(ino<0)
    {
        ino=-ino;
    }
    int i = 1;
    for( i = 2; i<=(ino/2);i++)
    {
         if(ino%i==0)
         {
           bflaged = true;
         }
    }
    return bflaged;
}
int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("Enter the number");
    scanf("%d",&ivalue);
    iret = checkprime(ivalue);
    if(iret==true)
    {
       printf("Given number is not prime  number");
    }
    else 
    {
        printf("Given number is  prime number");
    }

    return 0;
}