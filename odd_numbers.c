#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printodd(x);
}

void printodd(int n)
{
    if(n>0)
    {
        printodd(n-1);
        printf("%d ",2*n-1);
    }
}