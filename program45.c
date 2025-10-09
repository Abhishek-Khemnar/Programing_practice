#include<stdio.h>
int main()
{
    int no = 751;
    int digit = 0;

    digit = no%10;
    printf("digit is %d\n",digit);
    no = no /10;
    printf("updated no %d\n",no);

     digit = no%10;
    printf("digit is %d\n",digit);
    no = no /10;
    printf("updated no %d\n",no);

     digit = no%10;
    printf("digit is %d\n",digit);
    no = no /10;
    printf("updated no %d\n",no);

    return 0;
}