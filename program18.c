
#include<stdio.h>
int Summation(int ino)
{
    int sum = 0;
    for (int i = 1 ; i <=ino ; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int iValue = 0;
    int iret = 0;
    printf("Enter the Number \n");
    scanf("%d",&iValue);

    iret = Summation(iValue);
    printf("Sum of given number is : %d",iret);
    return 0;
}