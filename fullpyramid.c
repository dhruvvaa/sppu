#include<stdio.h>
int main()
{
    int i,n,space,cnt=0;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for (i=1;i<=n;++i,cnt=0)
    {
      for (space=1;space<=n-i;++space)
      {
         printf("  ");
      }
      while (cnt!=2*i-1)
      {
         printf("* ");
         ++cnt;
      }
      printf("\n");
    }
   return 0;
}