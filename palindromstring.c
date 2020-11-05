#include<stdio.h>
#include<conio.h>

void main()
{
    char strng[10],rvcstrng[10];
    int i,j=1;
    printf("enter a string");
    fgets(strng, sizeof(strng), stdin );
    puts(strng);
    for(i=9;i>=1;i--)
    {

        rvcstrng[j]=strng[i];
        printf(rvcstrng);
        j++;
    }
}

