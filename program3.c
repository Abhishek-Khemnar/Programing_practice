#include<stdio.h>
//interger division problem solution
int main()
{
    int total;
    int obtained ;
    float percentage;

    total = 500;
    obtained = 473;

    percentage = ((float)obtained/(float)total)*100;

    printf("prcentage obtained is %f",percentage);

    return 0;
}