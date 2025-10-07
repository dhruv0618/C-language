#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number = ");
    scanf("%d", &number);
    if (number % 2 == 0)
    {

        printf("It is an even number\n "); // if remainder is 0,it's even
    }
    else
    {
        printf("It is an odd number\n ");
    }
    return 0;
}