#include<stdio.h>
#include<conio.h>

void main()
{
    int num1, num2;
    printf("\nEnter First Number");
    scanf("%d", &num1);
    printf("\nEnter Second Number");
    scanf("%d", &num2);
    subtraction(num1,num2);
}

void subtraction(num1,num2)
{
    int result;
    result=num1+~num2+1;
    printf("Result is %d\n",result);
}
