//the product of number and all integers below it e.g 4! = 24
#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("\nFactorial of %d=%d",n,fact);
    return 0;
}