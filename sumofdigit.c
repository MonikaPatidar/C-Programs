#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("Enter Number");
    scanf("%d", &num);
    getstrong(num);
}

void getstrong(num)
{
    int result=0,reminder;
    while(num!=0)
    {
        reminder=num%10;
        num=num/10;
        result=reminder+result;

    }
printf("result is\t %d", result);

}


