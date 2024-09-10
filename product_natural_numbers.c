#include<stdio.h>

int product(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    product(n);
    printf("%d",product(n));
}

int product(int i)
{
    if (i == 1)
      return 1;
    return i*product(i-1);
}