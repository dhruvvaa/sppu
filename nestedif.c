/*input two numbers a and b, if a is greater check for odd even, if odd check if it is prime number*/
#include<stdio.h>
int main()
{
    int a,b,count=0;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        if(a%2==0)
        {
            printf("\n%d is even number",a);
        }
        else
        {
            for(int i=2;i<=a;i++)
            {
                if(a%i==0)
                count++;
            }
            if(count>2)
            printf("\n%d is not prime",a);
            else
            printf("\n%d is prime",a);
        }
    }
    else
    printf("\n%d is greater",b);
    return 0;
}