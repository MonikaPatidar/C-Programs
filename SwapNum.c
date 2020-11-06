#include<stdio.h>
#include<conio.h>

void main()
{
    int num1, num2;
    printf("\na =");
    scanf("%d", &num1);
    printf("\nb =");
    scanf("%d", &num2);
    Swaping(num1,num2);
}

void Swaping(num1,num2)
{
    int num3;
    num3=num1;
    num1=num2;
    num2=num3;
    printf("\n a= %d", num1);
    printf("\n b= %d", num2);
}
