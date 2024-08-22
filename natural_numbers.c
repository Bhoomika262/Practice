#include<stdio.h>

void print(int);
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    print(x);
}
void print(int n)
{
    if(n>0)
    {
        print(n-1);
        printf("%d ",n);
    }
}