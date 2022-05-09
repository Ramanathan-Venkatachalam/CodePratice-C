#include<stdio.h>
int main()
{
    int TotalMarks;
    float TotalPercentage, Average;
    int m1,m2,m3,m4,m5;

    printf("Enter the 5 marks: ");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

    TotalMarks = m1+m2+m3+m4+m5;
    Average = TotalMarks/5;
    TotalPercentage = ((float)TotalMarks/500)*100;

    printf("TotalMarks: %d\n",TotalMarks);
    printf("Average: %0.2f\n",Average);
    printf("TotalPercentage: %0.2f\n",TotalPercentage);
    return 0;
}