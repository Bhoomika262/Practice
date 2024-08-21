#include<stdio.h>

int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;
}

int nextprime(int a)
{
    while(!prime(++a));
    return a;
}

int main()
{
    int m;
    printf("Enter a number: ");
    scanf("%d",&m);
    printf("%d",nextprime(m));
    return 0;
}