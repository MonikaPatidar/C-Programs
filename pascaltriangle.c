#include<stdio.h>
#include<conio.h>

void main(){

int row, col;
printtriangle(row, col);
}

void printtriangle(i,j)
{
    int num=1, sum, n;

    for(i=1;i<=5;i++)
    {
        for(j=(5-i); j>=1;j--)
        {
            printf(" ");

        }
        for(n=1;n<=i;n++)
        {
             printf("%d",num);
             num=i+i;
             printf(" ");
        }
        printf("\n");
    }
}
