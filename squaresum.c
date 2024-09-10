#include<stdio.h>

int squaresum(int);

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    squaresum(n);
    printf("%d",squaresum(n));
}

int squaresum(int i)
{
    if (i==1)
     return 1;
    return i*i+squaresum(i-1);
}