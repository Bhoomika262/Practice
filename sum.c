#include<stdio.h>

int sum()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}

main()
{
    int s;
    s=sum();
    printf("%d",s);
    getch();
}