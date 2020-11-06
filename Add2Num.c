#include<stdio.h>
#include<conio.h>
#include<Math.h>
void main()
{
    int num1, num2;
    printf("\nEnter First Number");
    scanf("%d", &num1);
    printf("\nEnter Second Number");
    scanf("%d", &num2);
    addition(num1,num2);
}

void addition(num1,num2)
{
    printf("%*c%*c", num1, ' ', num2, ' ');
}
