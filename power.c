#include<stdio.h>

int exponent(int, int);

int main()
{
    int n,m;
    printf("Enter base: ");
    scanf("%d",&n);
    printf("Enter power: ");
    scanf("%d",&m);
    exponent(m,n); 
    printf("%d", exponent(n,m));  
}

int exponent(int i,int j)
{
    if (j == 0) {
        return 1;  
    } else 
    {
        return i * exponent(i, j - 1);  
    }
}