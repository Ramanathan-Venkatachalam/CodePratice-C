#include<stdio.h>

int main()
{
    int number, sum = 0, i,flag = 1;
    printf("Enter the Number: ");
    scanf("%d",&number);
    
    for(i=1;i<number;i++)
    {
        sum = sum + i;
        if(sum == number)
        {
            flag = 0;
            printf("The %d is the Triangular Number",number);
        }
    }
    if(flag == 1)
        {
            printf("The %d is not the Triangular Number",number);
        }
}