//program to show switch case
#include<stdio.h>
int main()
{
    int day;
    printf("Enter a number between 1-7");
    scanf("%d",&day);
    switch(day)
    {
        case 1:printf("\nMonday");
        break;
        case 2:printf("\nTuesday");
        break;
        case 3:printf("\nWednesday");
        break;
        case 4:printf("\nThursday");
        break;
        case 5:printf("\nFriday");
        break;
        case 6:printf("\nSaturday");
        break;
        case 7:printf("\nSunday");
        break;
        default:printf("\nInvalid number entered.\nEnter number between 1-7");
        break;
    }
    return 0;
}