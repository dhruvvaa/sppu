#include<stdio.h>
int main()
{
    int n,i,a=0,b=1;
    printf("Enter limit:");
    scanf("%d",&n);
    int c=a+b;
    printf("\nFibonacci Series:\n%d,%d",a,b);
    for(i=3;i<=n;i++)
    {
        printf(",%d",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}