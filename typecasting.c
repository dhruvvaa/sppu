#include<stdio.h>
int main()
{
    //implicit
    int a=3;
    int b=10;
    float result=a+b;
    printf("Result=%f",result);

    //explicit
    float div=(float)a/b;
    printf("\nResult=%f",div);
    return 0;
}

