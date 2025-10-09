#include<stdio.h>
#include<stdbool.h>
bool  checkprime(int no)
{
    bool bFlag = false;
    for(int i =  2; i<=(no/2) ; i++ )
    {
        if(no%i == 0)
        {
            bFlag = true;
          break;
        }
    }
      return bFlag;
 
}
int main()
{
    int ivalue = 0;
    int bret = false;
    printf("Enter number:");
    scanf("%d",&ivalue);
    bret = checkprime(ivalue);
    if(bret == true)
    {
        printf("Given number is not prime number");
    }
    else
    {
        printf("Given number is prime number");
    }
    return 0;
}