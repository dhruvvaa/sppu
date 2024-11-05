#include<stdio.h>
int main()
{
    //menu to be displayed
    printf("\t\t\tMENU");
    printf("\nNumber\t\t\tDish\t\t\tPrice");
    printf("\n1\t\t\tPizza\t\t\tRs.200");
    printf("\n2\t\t\tBurger\t\t\tRs.149");
    printf("\n3\t\t\tFrench Fries\t\tRs.100");
    printf("\n4\t\t\tGarlic Bread\t\tRs.60");
    printf("\n5\t\t\tPasta\t\t\tRs.150");
    printf("\n6\t\t\tCold Coffee\t\tRs.50");
    printf("\n7\t\t\tMojito\t\t\tRs.310");

    int num,qty;
    printf("\n\nEnter number according to the menu given above:");
    scanf("%d",&num);

    //using switch case to order according to number entered
    switch(num)
    {
        case 1:printf("\nYou have ordered a pizza.");
               printf("\nEnter quantity:");
               scanf("%d",&qty);
               printf("\nAmount:%d",200*qty);
               printf("\nThank You!");
               break;
        case 2:printf("\nYou have ordered a burger.");
               printf("\nEnter quantity:");
               scanf("%d",&qty);
               printf("\nAmount:%d",149*qty);
               printf("\nThank You!");
               break;
        case 3:printf("\nYou have ordered a french fries.");
               printf("\nEnter quantity:");
               scanf("%d",&qty);
               printf("\nAmount:%d",100*qty);
               printf("\nThank You!");
               break;
        case 4:printf("\nYou have ordered a garlic bread.");
               printf("\nEnter quantity:");
               scanf("%d",&qty);
               printf("\nAmount:%d",60*qty);
               printf("\nThank You!");
               break;
        case 5:printf("\nYou have ordered a pasta.");
               printf("\nEnter quantity:");
               scanf("%d",&qty);
               printf("\nAmount:%d",150*qty);
               printf("\nThank You!");
               break;
        case 6:printf("\nYou have ordered a cold coffee.");
               printf("\nEnter quantity:");
               scanf("%d",&qty);
               printf("\nAmount:%d",50*qty);
               printf("\nThank You!");
               break;
        case 7:printf("\nYou have ordered a mojito.");
               printf("\nEnter quantity:");
               scanf("%d",&qty);
               printf("\nAmount:%d",310*qty);
               printf("\nThank You!");
               break;
        default:printf("\nYou have entered wrong number.\nPlease check the menu and order again.");
    }
    return 0;
}