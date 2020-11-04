#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("Enter Number");
    scanf("%d", &num);
    getfactorial(num);
}

void getfactorial(num)
{
    int result=1,i;
    for(i=1;i<=num;i++)
    {
        result=i*result;
    }
    printf("%d", result);
}
