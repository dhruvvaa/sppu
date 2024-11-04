#include<stdio.h>
int main(){
    int i=1,odd=0,even=0;
    while (i<=10)
    {
        if(i%2==0)
        {
            even++;
         //printf("number is even \n");
        }
        else{
    odd++;
    }
     i++;
    }
printf("No. of Odd numbers = %d", odd);
printf("\nNo. of Even numbers = %d",even);
return 0;

}

