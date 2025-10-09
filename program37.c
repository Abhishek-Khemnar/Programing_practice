#include<stdio.h>
void displayEvenfactor(int no)
{
    if(no <0)
    {
        no = -no;
    }
    for (int i = 1 ; i <= (no/2) ; i++)
    {
    if((no % i == 0) &&(i%2==0) )
    {
        printf("even factors :%d\n",i);
    }

    }
}
int main()
{
    int ivalue = 0;
    printf("Enter number:");
    scanf("%d",&ivalue);
    displayEvenfactor(ivalue);
    return 0;
}