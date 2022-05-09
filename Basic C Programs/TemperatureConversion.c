#include<stdio.h>
//Temp Conversion
//Q. Write a C program to enter temperature in Celsius and convert it into Fahrenheit.
//Q. Write a C program to enter temperature in Fahrenheit and convert to Celsius.
int main()
{
    float c,f;
    float fahrenheit, celsius;
    printf("Enter the temperature in celsius and fahrenheit: ");
    scanf("%f %f",&c,&f);

    fahrenheit = (c*(9/5))+32;
    celsius = (f-32)*5/9;
    printf("Temperature in Fahrenheit: %0.2f\n",fahrenheit);
    printf("Temperature in Celsius: %0.3f\n",celsius);    
    return 0;
}