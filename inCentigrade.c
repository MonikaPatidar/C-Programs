#include<stdio.h>
#include<conio.h>

void main()
{
    int temp,centigrate;
    printf("Enter Temprature in Faranhide");
    scanf("%d", &temp);
    centigrate=(temp-32)/1.8;
    printf("In Centigrate %d", centigrate);

}
