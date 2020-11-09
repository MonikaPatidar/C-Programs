#include<stdio.h>
#include<conio.h>

void main()
{
    int array[10],i,key,j;
int    n=5;
    printf("Enter Element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t", array[i]);
    }

    for(i=0;i<n;i++)
        {
            key=array[i];
            for(j=i+1;j<n;j++)
            {
                while(array[j]==key && j<n)
                {
                    array[j]=array[j+1];
                    n--;
                }
            }

        }
        printf("\nNew Array is");
        for(i=0;i<n;i++)
        {
            printf("%d\t",array[i]);
        }


}

