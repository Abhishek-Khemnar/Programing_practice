#include<stdio.h>
void displayfactorNonfactors(int no)
{
    if(no <0)
    {
        no = -no;
    }
    for (int i = 1 ; i < no ; i++)
    {
    if(no % i == 0)
    {
        printf("factors :%d\n",i);
    }
    else
    {
        printf("Non factord :%d\n",i);
    }
    }
}
int main()
{
    int ivalue = 0;
    printf("Enter number:");
    scanf("%d",&ivalue);
    displayfactorNonfactors(ivalue);
    return 0;
}