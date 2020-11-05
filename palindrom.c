#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    reversenum(num);
}
void reversenum(num)
{
    int reminder,revnum,realnum=num;
    while(num!=0)
    {
            reminder=num%10;
            revnum=revnum*10+reminder;
            num=num/10;
    }

    if(revnum==realnum)
    {
        printf("\npalindrom Num");
    }
    else{
        printf("\nNot a palindrom Num");
    }

}
