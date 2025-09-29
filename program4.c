#include<stdio.h>
int main()
{
    int total = 0;
    int Obtained = 0;
    float percentage = 0.0f;

    printf("Enter total marks : \n");
    scanf("%d",&total);
    printf("Enter obtained marks:\n");
    scanf("%d",&Obtained);

    percentage = ((float)Obtained/(float)total)*100;
    printf("Toatal percentage  is %f",percentage);
    return 0;
}