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
    int result=0,i,reminder,numcopy=num;
    while(num!=0)
    {
        reminder=num%10;

    for(i=(reminder-1);i>=1;i--)
        {
            reminder=i*reminder;

        }
        printf("%d\nresult is", result);
        result=reminder+result;
        num=num/10;
    }
    printf("\nnum %d",numcopy);
    if(result==numcopy)
    {
        printf("\nstrong Number");
    }
    else{
        printf("\nNot a Strong Number");
    }
}

