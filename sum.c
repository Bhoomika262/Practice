#include<stdio.h>

int sum(int a, int b)
{
    int c;
    c=a+b;
    return c;
}

main()
{
    int s,x,y;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    s=sum(x,y);
    printf("%d",s);
    getch();
}