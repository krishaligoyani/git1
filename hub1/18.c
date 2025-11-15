#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("enter the size of table vertically:");
    scanf("%d", &n);
    printf("enter the size of table horizontally:");
    scanf("%d", &m);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t", i*j);
        }
        printf("\n");
    }
    return 0;

}

