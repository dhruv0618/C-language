#include <stdio.h>
int main()
{
    int number, i;

    printf("Enter a number =");
    scanf("%d", &number);

    if (number <= 1)
    {
        printf("%d Is Not a  Prime Number\n", number);
        return 0;
    }

    for (i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            printf("%d is not a prime number\n", number);
            return 0;
        }
    }

    printf("%d is a Prime number ", number);
    return 0;
}