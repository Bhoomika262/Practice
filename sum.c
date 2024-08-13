#include<stdio.h>

void sum()
{
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    printf("%d",a+b);
}

main()
{
    sum();
    getch();
}