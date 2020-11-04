#include<stdio.h>
#include<conio.h>

void main(){
inputnum();
}

void inputnum(){
int i,j,inpt;
printf("enter number of row");
scanf("%d", &inpt);
printf("%d",inpt);
printtriangle(i,j,inpt);
}

void printtriangle(i,j,inpt)
{
int a;
for(i=0;i<=inpt;i++)
{

        for(j=0;j<=i;j++)
        {

            printf("%d\t",a);
            a++;

        }
            printf("\n");
    }
}
