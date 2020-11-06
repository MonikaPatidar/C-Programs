#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("Enter Number");
    scanf("%d", &num);
    genericRoot(num);
}

void genericRoot(num)
{
    int result=0,reminder,numcopy=num;
    while(num!=0)
    {
        reminder=num%10;
        num=num/10;
        result=reminder+result;
    }
    checkresult(result,numcopy);
}
checkresult(result,numcopy)
{

    if(result<10)
    {
        printf("Generic Root is\t %d", result);
    }
    else{
        numcopy=result;
        genericRoot(numcopy);
    }
}

