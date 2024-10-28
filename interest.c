#include<stdio.h>
#include<math.h>
int main()
{
    float principle,rate,time,si,ci;
    printf("Enter principle amount:");
    scanf("%f",&principle);
    printf("Enter rate:");
    scanf("%f",&rate);
    printf("Enter time:");
    scanf("%f",&time);
    //calculating simple interest
    si=(principle*time*rate)/100;
    //calculating compund interest
    ci=principle*(pow(1+rate/100,time)-1);
    printf("\nSimple Interest:%f",si);
    printf("\nCompund Interest:%f",ci);
    return 0;
}