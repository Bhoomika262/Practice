#include<stdio.h>

int sum(int);
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    sum(n);
    printf("%d",sum(n));
}

int sum(int i)

{
    if(i == 1)
      return 1;
    return i+sum(i-1);
}