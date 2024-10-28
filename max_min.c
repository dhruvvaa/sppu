#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    int max,min;
    //to find maximum
    if(a>b&&a>c)
    max=a;
    else if(b>a&&b>c)
    max=b;
    else
    max=c;
    //to find minimum
    if(a<b&&a<c)
    min=a;
    else if(b<a&&b<c)
    min=b;
    else
    min=c;
    printf("\nMaximum:%d",max);
    printf("\nMinimum:%d",min);
    return 0;
}