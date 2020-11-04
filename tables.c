#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("Enter a Number");
    scanf("%d", &num);
    numtable(num);
}

void numtable(n)
{
    int i;
    for(i=0;i<=10;i++)
    {
        printf("%d\n", n*i);
    }
}
