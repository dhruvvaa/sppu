#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=1;i<=10;i++)
    {
        sum =sum+i;
        if(i==5)
        goto add;
    }
    add:printf("\nSum:%d",sum);
    return 0;
}