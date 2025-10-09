#include<stdio.h>
void displayfactor(int no)
{
    if(no <0)
    {
        no = -no;
    }
    for (int i = 1 ; i <= (no/2) ; i++)
    {
    if(no % i == 0)
    {
        printf("%d\n",i);
    }
    }
}
int main()
{
    int ivalue = 0;
    printf("Enter number:");
    scanf("%d",&ivalue);
    displayfactor(ivalue);
    return 0;
}