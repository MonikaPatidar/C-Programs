#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char strng1[10], strng2[10], temp[10];
    printf("enter first string\n");
    gets(strng1);
    printf("enter second string\n");
    gets(strng2);


    strcpy(temp,strng1);
    strcpy(strng1, strng2);
    strcpy(strng2, temp);
    printf("\n");
    printf("First String %s",strng1);
    printf("\n");
    printf("Second String %s",strng2);
}

