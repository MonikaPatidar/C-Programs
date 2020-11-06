#include<stdio.h>
#include<conio.h>

void main()
{
    int num1, num2,num3;
    printf("\nEnter First Number");
    scanf("%d", &num1);
    printf("\nEnter Second Number");
    scanf("%d", &num2);
    printf("\nEnter Second Number");
    scanf("%d", &num3);
    addition(num1,num2,num3);
}

void addition(num1,num2,num3)
{

    if((num1>num2) && (num1>num3))
    {
        printf("%d\t is Grater", num1);
    }
    else if((num2>num1) && (num1>num3))
    {
        printf("%d is Grater", num2);
    }
    else
    {
        printf("%d\t is Grater", num3);
    }
}
