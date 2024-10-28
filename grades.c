//program to show if else structure
#include<stdio.h>
int main()
{
    int percentage;
    printf("Enter percentage:");
    scanf("%d",&percentage);
    if(percentage>=70)
    printf("\nDistinction");
    else if(percentage>=60)
    printf("\nFirst Class");
    else if(percentage>=40)
    printf("\nSecond Class");
    else
    printf("\nFailed");
    return 0;
}