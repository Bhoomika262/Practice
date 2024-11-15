#include<stdio.h>

int sum(int A[],int size);

int main()
{
    int a[]={1,2,3,4,5};
    printf("%d",sum(a,5));
}

int sum(int A[],int size)
{
    int i,s;
    for(s=0,i=0;i<size;i++)
        s=s+A[i];
    return s;
}