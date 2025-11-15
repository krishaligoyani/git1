#include<stdio.h>
int main()
{
    int celsius;
    float fahrenheit;
    printf("enter the tempreture in celsius:");
    scanf("%d", &celsius);

    fahrenheit=(celsius*9)/5+32;
    printf("value of tempreture in fahrenheit=%f", fahrenheit);

    return 0;
}
