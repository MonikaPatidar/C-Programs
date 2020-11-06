#include<stdio.h>
#include<conio.h>

void main()
{
    int array1[4],array2[4],i,temp[4];
    printf("\nEnter First Array");
    for(i=0;i<4;i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("\nEnter Second Array");
    for(i=0;i<4;i++)
    {
        scanf("%d", &array2[i]);
    }
    for(i=0;i<4;i++)
    {
         temp[i]=array1[i];
         array1[i]=array2[i];
         array2[i]=temp[i];
    }
     printf("\n");
    for(i=0;i<4;i++)
    {
        printf("\nFirst Array is %d", array1[i]);
    }
    printf("\n");
    for(i=0;i<4;i++)
    {
        printf("\n Second Array is %d", array2[i]);
    }
}

