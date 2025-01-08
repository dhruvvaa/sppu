//to insert a sub-string into a given main string from a given position.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20], str2[20];
    int l1,l2,n,i;
    puts("Enter first string\n");
    gets(str1);
    l1=strlen(str1);
    puts("Enter second string\n");
    gets(str2);
    l2=strlen(str2);
    printf("Enter position where string is to be inserted\n");
    scanf("%d",&n);
    for(i=n;i<l1;i++)
    {
        str1[i+l2]=str1[i];
    }
    for(i=0;i<l2;i++)
    {
        str1[n+i]=str2[i];
    }
    str2[l2+1]='\0';
    printf("After inserting, the string becomes %s",str1);
    return 0;
}