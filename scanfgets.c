//diffrerence between scanf() and gets()
#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter name:");
    scanf("%s",&name);
    printf("\nHello %s",name);
    return 0;
}

/* #include<stdio.h>
int main()
{
    char name[20];
    printf("Enter a name:");
    gets(name);
    printf("\nHello %s",name);
    return 0;
}*/