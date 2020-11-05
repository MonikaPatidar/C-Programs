#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("Enter number\n");
    scanf("%d", &num);
    perfectnum(num);
}

void perfectnum(num)
{
    int div=1,i;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            div=div+i;
        }

    }
    if(div==num)
        {
            printf("Perfect Number");
        }
    else{
        printf("not a Perfect Number")
    }

}
