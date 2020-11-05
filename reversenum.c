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
    while(num!=0)
    {
            int reminder,revnum;
            reminder=num%10;
            revnum=revnum*10+reminder;
            num=num/10;
            printf("%d", reminder);
    }

}
