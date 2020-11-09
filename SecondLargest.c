#include<stdio.h>
#include<conio.h>

void main()
{
    int array[5],i,j,temp;
    printf("Enter Element");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
     temp=array[0];

    for(i=0;i<5;i++)
    {
            if(temp<array[i+1])
            {
                temp=array[i+1];

            }
    }
    printf("\n%d",temp);
    j=array[0];
    for(i=0;i<5;i++)
        {
                if(j<array[i+1] && array[i+1]!=temp)
                {
                    j=array[i+1];

                }
        }
    printf("\nSecond Largest Element is= %d",j);

}

