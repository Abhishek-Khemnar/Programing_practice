#include<stdio.h>
int  countEvendigit(int ino)
{
    int idigit = 0;
    int icount = 0;
    while(ino!=0)
    {
        idigit = ino%10;      
        ino =  ino/10;
        if(idigit%2==0)
        {
        icount++;
        }
    }
    return icount;

}
int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("Enter the number");
    scanf("%d",&ivalue);
    iret=countEvendigit(ivalue);
    printf("Number of even digit is %d",iret);

    return 0;
}