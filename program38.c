#include<stdio.h>
int  sumfactor(int no)
{
    int sum = 0;
    if(no <0)
    {
        no = -no;
    }
    for (int i = 1 ; i <= (no/2) ; i++)
    {
    if(no % i == 0 )
    {
       sum = sum + i;   
    }
    }
    return sum;
}
int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("Enter number:");
    scanf("%d",&ivalue);
    iret = sumfactor(ivalue);
    printf("summation of factor is : %d",iret);
    return 0;
}