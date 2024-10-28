//program to show ternary operator
#include<stdio.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    (age>=18)?printf("Can vote"):printf("Cannot vote");
    return 0;
}