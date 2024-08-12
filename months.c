#include <stdio.h>

int main() 
{
    int a;
    printf("Enter month number: ");
    scanf("%d", &a);

    if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12)
        printf("31 days\n");
    else if (a == 4 || a == 6 || a == 9 || a == 11)
        printf("30 days\n");
    else if (a == 2)
        printf("28 or 29 days (depending on whether it's a leap year)\n");
    else
        printf("Invalid month number\n");

    return 0;
}