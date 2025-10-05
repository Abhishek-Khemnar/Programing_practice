
#include<stdio.h>
#include<stdbool.h>
bool checkDivisible(int ino)
{
    if((ino % 5 == 0) && (ino%3 == 0))
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
    int iValue = 0;
    bool bRet = 0;

    printf("Enter the Number for checking Divisible by 5 and 3\n");
    scanf("%d",&iValue);

    bRet = checkDivisible(iValue);
    if(bRet == true)
    {
         printf("Given number is Divisible by 5 and 3");
    }
    else
    {
        printf("Given number is not Divisible by 5 and 3");
    }
    return 0;
}