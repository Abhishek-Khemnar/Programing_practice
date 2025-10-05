#include<stdio.h>
int Summation(int ino)
{
    int sum = 0;
    for(int i = 1 ; i <= ino ; i++)
    {
        sum = sum + i;
    }
    return sum;

}
int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("Enter the number \n");
    scanf("%d",&ivalue);
    iret = Summation(ivalue);
    printf("summation of given number is :%d",iret);

    return 0; 
}