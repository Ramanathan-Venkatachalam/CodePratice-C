#include<stdio.h>
//Distance Calculation Conversion
int main()
{
    int dist_bw_cities;
    float m,f,inch,centi;

    printf("Enter the dist_bw_cities in km: ");
    scanf("%d",&dist_bw_cities);

    m = dist_bw_cities*1000;
    centi = m*100;
    inch = centi/2.54;
    f = inch/12;

    printf("dist_bw_cities in metres: %0.2fm\n",m);
    printf("dist_bw_cities in feet: %0.2ffoot\n",f);
    printf("dist_bw_cities in inches: %0.2finch\n",inch);
    printf("dist_bw_cities in centimeters: %0.2fcm\n",centi);
    
    return 0;
}