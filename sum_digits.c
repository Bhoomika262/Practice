#include<stdio.h>

int sum(int);

int main()
{
    int n;
    printf("Enter a digit: ");
    scanf("%d",&n);
    sum(n);
    printf("%d",sum(n));
}

int sum(int i)
{
    if (i==0)
     return 0;
    return (i%10)+sum(i/10);
}