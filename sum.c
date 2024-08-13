#include<stdio.h>

void sum(int a, int b)
{
    int c;
    c=a+b;
    printf("%d",c);
}

main()
{
    int x,y;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&x,&y);
    sum(x,y);
    getch();
}