#include<stdio.h>
int main()
{
    int num,row,result;
    printf("Enter number to print multiplication table:");
    scanf("%d",&num);
    printf("\nEnter number of rows:");
    scanf("%d",&row);
    for(int i=1;i<=row;i++)
    {
        result=num*i;
        printf("\n%d * %d = %d",num,i,result);
    }
    return 0;
}