#include <stdio.h>

int main()
{
    float a, b;
    float area;

    printf("Enter the value of Base & Height");
    scanf("%f%f", &a, &b);
    area =(a * b) / 2 ;
    printf("Area of the triangle is: %f", area);
    return 0;
}

