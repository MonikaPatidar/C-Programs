#include<stdio.h>

int main()
{
    int h, b;
    float area;
    printf("\nEnter the height of the Triangle: ");
    scanf("%d", &h);
    printf("\nEnter the base of the Triangle: ");
    scanf("%d", &b);

    area = (float)(h*b)/2;
    printf("\nThe area of the triangle is: %f", area);

    return 0;
}
