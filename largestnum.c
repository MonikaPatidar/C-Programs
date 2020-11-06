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
    scanf("%d", &num2);
    findgrater(num1,num2,num3);
}

void findgrater(a,b,c)
{
    if(a-b>0 && a-c>0)
    {
        printf("%d is Grater",a);
    }
    else if(b-a>0 && a-c>0)
    {
        printf("%d is Grater",b);
    }
    else
    {
        printf("%d is Grater",c);
    }
}
