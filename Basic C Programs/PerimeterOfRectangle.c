#include<stdio.h>
//Perimeter of Rectangle
//Q. Write a C program to enter length and breadth of a rectangle and find its perimeter.
int main()
{
    float length, breadth, perimeter;
    printf("Enter the length and breadth of a rectangle: ");
    scanf("%f %f",&length,&breadth);

    perimeter = 2*(length+breadth);

    printf("Perimeter of rectangle: %0.2f\n",perimeter);
    return 0;
}