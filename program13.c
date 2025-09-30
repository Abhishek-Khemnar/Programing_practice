//sequence
#include<stdio.h>
void display(int ino)
{
    for (int i = 1 ; i <=5 ; i++)
    {
        printf("%d\n",ino);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the value");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}