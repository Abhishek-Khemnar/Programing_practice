/*
    Start
        Accept age from user
            If age is less than 5 then there will no ticket
            If it is in between 5 to 18 then it will be 700
            It it is in betwween 18 to 50 it will be 999
            And if it is greater than 50 then it will be 500
    Stop
*/

#include<stdio.h>
#define ERR_value -1
int Display(int Age)
{
    int iPrice = 0;
    if (Age <0)
    {
        return ERR_value;
    }
    else if(Age >0 && Age<5)
    {
        iPrice = 0;
    }
    else if( Age >=5 && Age <18)
    {
        iPrice = 700;
    }
    else if(Age >=18 && Age <50)
    {
        iPrice = 999;
    }
    else 
    {
        iPrice = 500;
    }

    return iPrice;

}
int main()
{
    int iAge = 0;
    int iRet = 0;
    printf("Enter your age :\n");
    scanf("%d",&iAge);
    iRet = Display(iAge);

    if(iRet == ERR_value)
    {
      printf("invalid age");
    }
    else 
    {
    printf("Price of Ticket is: %d",iRet);
    }
    return 0;
}