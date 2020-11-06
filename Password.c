#include<stdio.h>
#include<conio.h>

void main()
{
    char pass[8],star;
    int i;
    printf("Enter Password\n");


    for(i=0;i<=7;i++)
    {
        star=getch();
        pass[i]=star;
        star='*';
        printf("%c", star);
    }
    printf("\n");
    for(i=0;i<=7;i++)
    {
         printf("%c",pass[i]);
    }
}
