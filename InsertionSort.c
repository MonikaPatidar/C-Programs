#include<stdio.h>
#include<conio.h>

void main()
{
    int array[5],i;
    printf("Enter Array");
    for(i=0;i<5;i++)
    {
        scanf("%d", &array[i]);
    }
    InsertionSort(array,i);
}
void InsertionSort(int array[],int i)
{
    int j,key;
    for(i=1;i<5;i++)
    {
        key=array[i];
        j=i-1;
        while((array[j]>key) && (j>=0))
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=key;
    }
    for(i=0;i<5;i++)
    {
        printf("%d",array[i]);
    }
}
