#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c>2)
    printf("\nNumber is not prime.");
    else
    printf("\nNumber is prime.");
    return 0;
}