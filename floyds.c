#include <stdio.h>
int main()
{
   int i,j,n,s=1;
   printf("Enter the number of rows: ");
   scanf("%d", &n);
   for (i=0;i<n;i++)
   {
      for(j=0;j<=i;j++)
      {
         printf("%d ",s++);
      }
      printf("\n");
   }
   return 0;
}
