#include<stdio.h>

float area(int r)
{
    return 3.14*r*r;
}

int main()
{
    int x;
    float a;
    printf("Enter radius: ");
    scanf("%d",&x);
    a=area(x);
    printf("%f",a);
    return 0;
}