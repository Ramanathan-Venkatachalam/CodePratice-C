#include<stdio.h>
//Area of Rectangle
//Q. Write a C program to enter length and breadth of a rectangle and find its area.
int main()
{
    float length, breadth, area;
    printf("Enter the length and breadth of a rectangle: ");
    scanf("%f %f",&length,&breadth);

    area = length*breadth;

    printf("Area of rectangle: %0.2f\n",area);
    return 0;
}