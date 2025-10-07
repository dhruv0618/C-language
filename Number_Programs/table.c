#include <stdio.h>
int main()
{
    int number, i, a;
    printf("Enter a number =  ");
    scanf("%d", &number);
    for (i = 1; i <= 10; i++)
    {
        a = i * number;
        printf("%d\n", a);
    }

    return 0;
}