#include<stdio.h>
#include<conio.h>

void main()
{
    char strng[10], strng2[10];
    printf("\nEnter First Number");
    gets(strng);
    printf("\nEnter Second Number");
    gets(strng2);
    addition(num1,num2);
}

void addition(num1,num2)
{
    int result;
    result=add(num1,num2);
    printf("\n%d", result);
}
