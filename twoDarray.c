#include<stdio.h>
#include<conio.h>
int i=3,j=3;
void main(){
int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
print2darray(arr);
}

void print2darray(int arr[i][j]){
    for(int m=0;m<i;m++)
    {
        for(int n=0;n<j;n++)
        {
            printf("%d\t", arr[m][n]);

        }
     printf("\n");
    }

}
