#include<stdio.h>
#include<conio.h>

void main()
{
    int array[5],i,element;
    printf("Enter Element");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\nEnter the position you want to delete the element");
    scanf("%d",&element);
    element=element-1;
    for(i=element;i<5;i++)
        {
                    array[i]=array[i+1];

        }
        printf("\nNew Array is");
    for(i=0;i<5-1;i++)
    {
        printf("%d\t",array[i]);
    }


}

