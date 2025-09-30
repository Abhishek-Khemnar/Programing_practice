
#include<stdio.h>
#include<stdbool.h>
bool checkEven(int ino)
{
    bool bFlag = false;
    if(ino % 2 == 0)
    {
        bFlag = true;
    }
    else
    {
        bFlag = false;
    }
    return bFlag;
}
int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter the Number for checking even or odd \n");
    scanf("%d",&iValue);

    bRet = checkEven(iValue);
    if(bRet == true)
    {
         printf("Given number is even");
    }
    else
    {
        printf("Given number is odd");
    }
    return 0;
}