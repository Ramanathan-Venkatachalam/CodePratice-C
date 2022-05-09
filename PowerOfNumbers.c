#include<stdio.h>
#include<math.h>
//Q. Write a C program to find power of any number x ^ y.
int main()
{
    float x, y, Power;
    printf("Enter the Number: ");
    scanf("%f %f",&x,&y);

    Power = pow(x,y);

    printf("Power of %.2f ^ %.2f is %.3f\n",x,y,Power);
    return 0;
}