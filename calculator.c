#include<stdio.h>
int main()
{
    double n1,n2;
    char s;
    printf("Enter symbol of calculation to be performed.\n1.+:Addition\n2.-:Subtraction\n3.*:Multiplication\n4./:Division\n5.%:Modulus\n");
    scanf("%c",&s);
    printf("\nEnter two numbers:");
    scanf("%lf %lf",&n1,&n2);
    switch(s)
    {
        case '+':printf("\nAddition:%lf",n1+n2);
        break;
        case '-':printf("\nSubtraction:%lf",n1-n2);
        break;
        case '*':printf("\nMultiplication:%lf",n1*n2);
        break;
        case '/':printf("\nDivision:%lf",n1/n2);
        break;
        case '%':printf("\nRemainder:%lf",n1%n2);
        break;
        default:printf("\nInvalid Operator.");
        break;
    }
    return 0;
}
