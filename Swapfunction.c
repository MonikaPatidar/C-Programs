#include<stdio.h>
#include<conio.h>

void main()
{
    int num1, num2;
    printf("\na=");
    scanf("%d", &num1);
    printf("\nb=");
    scanf("%d", &num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\n a= %d", num1);
    printf("\n b= %d", num2);

}

