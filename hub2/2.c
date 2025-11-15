#include<stdio.h>
#include<unistd.h>
int main()
{
    int i;
    printf("enter your time: ");
    scanf("%d",&i);

    while(i>=0)

    {

        printf(" your time is %d  \n",i);
        sleep(1);

        i--;

    }

    return 0;
}
