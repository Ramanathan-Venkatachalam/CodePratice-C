#include<stdio.h>
//Days Conversion
//Q. Write a C program to convert days into years, weeks.

int main()
{
    int days;
    float months, years;
    printf("Enter the no of days: ");
    scanf("%d", &days);

    months = days/30;
    years = months/12;
    printf("Months: %0.2f\n",months);
    printf("Years: %0.2f\n",years);    
    return 0;
}