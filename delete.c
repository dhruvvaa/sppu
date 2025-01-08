//to delete n characters from a given position in a given string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,l,n,p;
    puts("Enter a string\n");
    gets(str);
    l=strlen(str);
    printf("Enter the positon where characters are to be deleted:");
    scanf("%d",&p);
    printf("\nEnter the number of characters to be deleted:");
    scanf("%d",&n);
    for(i=p+n;i<l;i++)
    {
        str[i-n]=str[i];
    }
    str[i-n]='\0';
    printf("\nThe string is %s",str);
    return 0;
}