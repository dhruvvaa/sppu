#include<stdio.h>
int main()
{
    int x[5]={1,2,3,4,5};
    int *y=&x[0];
    printf("Value of x[0]:%d",y[0]);
    printf("\nValue of x[1]:%d",y[1]);
    printf("\nValue of x[2]:%d",y[2]);
    printf("\nValue of x[3]:%d",y[3]);
    printf("\nValue of x[4]:%d",y[4]);

    printf("\nAddress of y[0]:%d",&x[0]);
    printf("\nAddress of y[1]:%d",&x[1]);
    printf("\nAddress of y[2]:%d",&x[2]);
    printf("\nAddress of y[3]:%d",&x[3]);
    printf("\nAddress of y[4]:%d",&x[4]);

    printf("\nValue of y:%d",*y);
    printf("\nValue of y:%d",*y++);
    printf("\nValue of y:%d",++*y);
    printf("\nValue of x[2]:%d",*(y+1));
    printf("\nValue of x[3]:%d",*(y+2));
    printf("\nValue of x[4]:%d",*(y+3));

    return 0;
}