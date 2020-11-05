#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("Enter the Number");
    scanf("%d", &num);
    primefactor(num);
}

void primefactor(num)
{
    int i,j;

    for(i=2;i<=num;i++)
    {
        printf("Value of i: %d\n", i);
        for(j=num;j>=2;j--)
        {
            printf("Value of J: %d\n", j);
            if(j%i==0)
            {
                printf("Value of i%J: %d\n", j);
                num=num%i;
                printf("%d\n", num);
            }
        }
    }
}
