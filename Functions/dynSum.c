#include <stdio.h>
int sum(int x, int y)
{
    return x + y;
}
int main()
{
    int a, b;
    printf("Enter two number ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("sum = %d", sum(a, b));
}