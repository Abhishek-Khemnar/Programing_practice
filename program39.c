#include<stdio.h>
#include<stdbool.h>
bool  checkperfect(int no)
{
    int sum = 0;
    for(int i = 1 ; i <= (no/2) ; i++)
    {
       if(no%i==0)
       {
         sum = sum +i;
       }
    }
    if(sum == no)
    {
       return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int ivalue = 0;
    int bret = false;
    printf("Enter number:");
    scanf("%d",&ivalue);
    bret = checkperfect(ivalue);
    if(bret == true)
    {
        printf("Given number is perfect number");
    }
    else
    {
        printf("Given number is not perfect number");
    }
    return 0;
}