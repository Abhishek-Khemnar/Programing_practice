#include<stdio.h>
#include<stdbool.h>
bool checkperfect(int ino)
{
    bool bflaged  = false;
    int sum = 0; 
    if(ino<0)
    {
        ino=-ino;
    }
    for(int i = 1; i<=(ino/2);i++)
    {
         if(ino%i==0)
         {
           sum  = sum + i;
         }
    }
    if(ino==sum)
    {
        bflaged = true;
    }
    return bflaged;
}
int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("Enter the number");
    scanf("%d",&ivalue);
    iret = checkperfect(ivalue);
    if(iret==true)
    {
       printf("Given number is perfect number");
    }
    else 
    {
        printf("Given number is not perfect number");
    }

    return 0;
}