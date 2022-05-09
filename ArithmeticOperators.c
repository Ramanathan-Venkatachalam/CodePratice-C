/*
Arthimetic Operators
    * / %
    + -
*/

#include<stdio.h>
int main()
{
    int a,b,store;
    printf("Enter 2 Nos:");
    scanf("%d %d",&a,&b);
    store = a+b;
    printf("Add: %d\n",store);
    store = a-b;
    printf("Sub: %d\n",store);
    store = a*b;
    printf("Mul: %d\n",store);
    store = a/b;
    printf("Div: %d\n",store); //Quotient
    store = a%b;
    printf("Mod: %d\n",store); //Remainder
    return 0;
}