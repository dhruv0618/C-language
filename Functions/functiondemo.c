#include <stdio.h>

void sum()
{
    int a, b, sum = 0;
    printf("enter two number\n ");
    scanf("%d,%d", &a, &b);
    sum = a + b;
    printf("sum = %d\n ", sum);
}
int main()
{

    sum();
    sum();
}
