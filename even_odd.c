#include<stdio.h>

int even(int x)
{
    return x%2==0;
}

main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(even(n))
         printf("even");
    else
        printf("odd");
}