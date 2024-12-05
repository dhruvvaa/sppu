//if the no. 1001 is reversed it stil remains 1001 that is palindrome no.
//similar for MADAM
#include<stdio.h>
#include<string.h>
int main()
{
    //for number
    int n,rev=0,rem;
    printf("Enetr a number:");
    scanf("%d",&n);
    int og=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(og==rev)
    printf("\nNumber is palindrome.");
    else
    printf("\nNumber is not palindrome.");
    return 0;
}