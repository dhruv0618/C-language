#include <stdio.h>

void sum()
{
    int a, b, sum = 0;
    printf("Enter two number: ");
    scanf("%d", &a);
    scanf("%d", &b);
    sum = a + b;
    printf("sum = %d \n", sum);
}
int main()
{

    sum();
    return 0;
}
