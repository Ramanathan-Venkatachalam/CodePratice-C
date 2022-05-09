/*
Variables are used to store values at runtime
Literals are used to make the datatype to your way
ex : long int d = 22233l;
actually d is int we are making it as long int by using l
*/

#include<stdio.h>

int main()
{
    int a=10;
    char b='R';
    float c=12.6f;
    long int d=2232l;
    int e=0x41; //Hexa

    int f=010; //Octal

    printf("%d %c %d %f %lf %d %d\n",a,b,b,c,d,e,f);
    printf("%d %d %0.2f %lf\n",a,b,c,d);

    int aa=234e2; //Exponentional
    int bb=234e-1;
    printf("%d\n",aa);
    printf("%d",bb);
    return 0;
}