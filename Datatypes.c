/*
Datatypes in C
1. Builtin Datatypes [Primitives]
    Integral - int, char
    Boolean
    Floating Point - float, double
2. Derived Datatypes
    Arrays, Pointers
3. User Defined Datatypes
    Structure - struct
    Enumeration - enum
    Union

Integer Datatype:
    whole no - postive, negative or zero
    
    short int - 2byte %hd
    unsigned short int - 2byte %hu
    unsigned int - 4byte %u
    int - 4byte %d
    long int - 4byte %ld
    unsigned long int - 4byte %lu
    long long int - 8byte %lld
    unsigned long long int - 8byte %llu

Character Datatype:
    one character(letter, number)
    single letter enclosed with 'A'

    char or signed char - 1byte %c
    unsigned char - 1byte %c

Floating point Datatype:
    decimal values

    float - 4byte %f
    double - 8byte %lf
    long double - 12byte %lf
*/

#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
    printf("The size of int is %d and min %d max %d\n", sizeof(int),INT_MIN,INT_MAX);
    printf("The size of char is %d and min %d max %d\n", sizeof(char),CHAR_MIN,CHAR_MAX);
  
    printf("The size of float is %d and min %d max %d\n", sizeof(float),FLT_MIN,FLT_MAX);  
    return 0;
}
