#include<stdio.h>
int main()
{
    int i,j,s;
for(i=8;i<=1;i++)
    {
                for(j=1;j<=2*i-1;j++)
         {
            printf("*");
       }

         for(s=0;s<=3-i;s++)
         {
             printf(" ");
         }
      printf("\n");
    }
    return 0;
 }



