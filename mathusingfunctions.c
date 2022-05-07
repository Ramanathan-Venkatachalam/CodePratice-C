#include<stdio.h>

//FunctionDeclaration
//UserDefined
void add(); //voidfunction without parameters
void subtract(int a, int b); //voidfunction with parameters
int mul(); //ReturnType function with parameters
int divide(int a, int b); //ReturnType function with parameters

void add()
{
    int a = 50, b = 50;
    int c = a + b;
    printf("Addition = %d\n",c); 
}

void subtract(int a, int b)
{
    int c = a - b;
    printf("Subtraction = %d\n",c); 
}

int mul()
{
    int a = 50, b = 50;
    int c = a * b;
    return c; 
}

int divide(int a, int b)
{
    int c = a / b;
    return c; 
}

//Inbuilt
int main() //No input parameters in embedded main function
{
    add();
    subtract(10,5);
    mul();
    printf("Multiplication = %d\n",mul());
    printf("Division = %d\n",divide(10,5));
}
