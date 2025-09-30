//sequence
#include<stdio.h>
void display(int ino)
{
    for (int i = 1 ; i <=ino ; i++)
    {
        printf("%d\n",i);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the Frequency");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}