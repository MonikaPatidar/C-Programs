#include<stdio.h>
#include<conio.h>

void main()
{
    int array[5],i,element,position;
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
    scanf("%d",&position);
    printf("\nEnter the element");
    scanf("%d",&element);
    position=position-1;
    for(i=5;i>=position;i--)
        {
            array[i]=array[i-1];
            if(i==position)
            {
                 array[position]=element;
            }

        }
        printf("\nNew Array is");
    for(i=0;i<=5;i++)
    {
        printf("%d\t",array[i]);
    }


}

