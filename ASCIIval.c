#include<stdio.h>
#include<conio.h>

void main()
{
    char num1;
    printf("\nEnter Character");
    scanf("%c", &num1);
    AsciiVal(num1);
}

void AsciiVal(num1)
{
    printf("\nASCII Value of %c is %d", num1 ,num1);
}
