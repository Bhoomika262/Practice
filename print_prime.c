#include<stdio.h>

int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

void printprime(int a, int b)
{
    int x;
    for(x=a;x<=b;x++)
    {
        if(prime(x))
        {
            printf("%d ",x);
        }
    }
}

main()
{
    int m,n;
    printf("Enter two numbers between which you want to view prime numbers: \n");
    scanf("%d %d",&m,&n);
    printprime(m,n);
}