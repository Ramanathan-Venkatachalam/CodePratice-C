#include<stdio.h>
//Area,Circumference of Circle
//Q. Write a C program to enter radius of a circle and find its diameter, circumference and area.
int main()
{
    float pi = 3.14;
    float radius, circumference, area, diameter;
    printf("Enter the raidus of a circle: ");
    scanf("%f",&radius);

    diameter = 2*radius;
    circumference = 2*pi*radius;
    area = pi*(radius*radius);
    
    printf("Diameter of circle: %0.2f\n",diameter);
    printf("Circumference of circle: %0.2f\n",circumference);
    printf("Area of circle: %0.2f\n",area);
    
    return 0;
}