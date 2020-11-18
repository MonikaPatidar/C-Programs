#include<stdio.h>
#include<conio.h>

void main()
{
    int array[5],i,j,temp;
    printf("Enter Array Element\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    //int siz= sizeof(array)/sizeof(int);
    //printf("size\n %d", siz);
     for(i=0;i<(5-1);i++)
    {
       for(j=0;j<(5-1);j++)
       {
           if(array[j]>array[j+1])
           {
               temp=array[j];
               array[j]=array[j+1];
               array[j+1]=temp;
           }
       }
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%d", array[i]);
    }
}




