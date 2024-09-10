#include<stdio.h>

int evensum(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    evensum(n);
    printf("%d",evensum(n));
}

int evensum(int i)
{
    if (i == 1)
      return 2;
    return 2*i+evensum(i-1);
}