#include<stdio.h>
#include<conio.h>

void main()
{
    char para[50];
    printf("Enter Sentense");
    fgets(para, sizeof(para), stdin);
    puts(para);
}
