#include<stdio.h>
//SalaryCalculation

int main()
{
    int basic;
    float da,hra,gross;
    printf("Enter the Basic Salary: ");
    scanf("%d",&basic);

    da = basic*0.4;
    hra = basic*0.2;
    gross = basic+da+hra;

    printf("The DA amount is %0.2f\n",da);
    printf("The HRA amount is %0.2f\n",hra);
    printf("The Gross Salary amount is %0.2f\n",gross);    

    return 0; 
}