#include<stdio.h>
#include<math.h>
//Q. Write a C program to enter any number and calculate its square root.
int main()
{
    float number, SquareRoot;
    printf("Enter the Number: ");
    scanf("%f",&number);

    SquareRoot = sqrt(number);

    printf("Squareroot of %.2f is %.3f\n",number,SquareRoot);
    return 0;
}