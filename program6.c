/*
    Start
        Accept percentage from user
            If percentage is less than 0 and greater than 100
                Display as invalid input
            If percentage is greater than 0 and less than 35
                Display as fail
            If percentage is greater than 35 and less than 50
                Display as Pass class
            If percentage is greater than 50 and less than 60
                Display as second class
            If percentage is greater than 60 and less than 70
                Display as first class
            If percentage is greater than 70 and less than 100
                Display as first class with distinction
    Stop
*/

#include<stdio.h>
void Display(float perc)
{
    if(perc < 0.0f  || perc >100.0f)
    {
        printf("Invalid input");
    }

    else if (perc >= 0.0f && perc <35.0f)
    {
        printf(" Fail");
    }

    else if (perc >=35.0f && perc<50.0f)
    {
        printf("pass");
        
    }
     else if (perc >=50.0f && perc<60.0f)
    {
        printf("second class");   
    }
     else if (perc >=60.0f && perc<70.0f)
    {
        printf("first class");
    }
    else
    {
        printf("First class with distinction");
    }
}
int main()
{
    float fPercentge = 0.0f;
    printf("Enter the percentage");
    scanf("%f",&fPercentge);
    Display(fPercentge);
    return 0;
}