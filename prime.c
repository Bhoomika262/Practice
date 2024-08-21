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

main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(prime(a))
        printf("Prime");
    else
        printf("not prime");
}