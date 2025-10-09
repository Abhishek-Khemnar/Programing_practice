#include<stdio.h>
int  countdigit(int ino)
{
    int idigit = 0;
    int icount = 0;
    while(ino!=0)
    {
        idigit = ino%10;
        ino =  ino/10;
        icount++;
    }
    return icount;

}
int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("Enter the number");
    scanf("%d",&ivalue);
    iret=countdigit(ivalue);
    printf("Number of digit is %d",iret);

    return 0;
}