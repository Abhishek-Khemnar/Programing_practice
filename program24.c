#include<stdio.h>
void Display(int ino)
{
    for(int i = 1 ; i <= ino ; i++)
    {
        printf("%d\n",i);
    }

}
int main()
{
    int ivalue = 0;
    printf("Enter the number \n");
    scanf("%d",&ivalue);
    Display(ivalue);
    return 0; 
}