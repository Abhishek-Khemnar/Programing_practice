#include<stdio.h>
float CalculatePercentage(int Total , int Obtained)
{
    float percentage = 0;
    percentage = ((float)Obtained /(float)Total)*100;
    return percentage;
}
int main()
{
    int iTotal = 0;
    int iObtained = 0;
    float fret = 0.0f;

    printf("Enter total marks : \n");
    scanf("%d",&iTotal);
    printf("Enter obtained marks:\n");
    scanf("%d",&iObtained);

    fret = CalculatePercentage(iTotal,iObtained);
    printf("Toatal percentage  is %f",fret);
    return 0;
}