#include<stdio.h>
int  Sumdigit(int ino)
{
    int idigit = 0;
    int isum = 0;
    while(ino!=0)
    {
        idigit = ino%10;      
        ino =  ino/10;
        isum = isum + idigit;
    }
    return isum;

}
int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("Enter the number");
    scanf("%d",&ivalue);
    iret=Sumdigit(ivalue);
    printf("sum  of  digit is %d",iret);

    return 0;
}