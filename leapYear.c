
#include<stdio.h>
#include<conio.h>

void main()
{
    int year;
    printf("Enter the Year\n");
    scanf("%d", &year);
    leapyear(year);
}

void leapyear(year)
{
    if((year%4)==0)
    {
        printf("leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
}
