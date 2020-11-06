#include<stdio.h>
#include<conio.h>
#include<Math.h>

void main()
{
    int num,p;
    printf("Enter the number");
    scanf("%d", &num);
    printf("Enter Power");
    scanf("%d",&p);
    getpower(num,p);
}
 void getpower(num,p)
 {
     int power;
     power=pow(num,p);
     printf("\n%d", power);
 }
