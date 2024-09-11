#include <stdio.h>

int exponent(int, int);

int main() 
{
    int n, m;
    printf("Enter the base: ");
    scanf("%d", &n);
    printf("Enter the exponent: ");
    scanf("%d", &m);
    printf("%d", exponent(n, m));  
}

int exponent(int i, int j) {
    if (j == 0) 
    {
        return 1;  
    }
     else 
    {
        return i * exponent(i, j - 1);  
    }
}
