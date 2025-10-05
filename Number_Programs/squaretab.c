#include <stdio.h>
int main()
{

    int number, i;
    printf("Enter a number :");
    scanf("%d", &number);
    for (i = 1; i <= 50; i++)

    {
        printf("%d is %d \n", i, i * i);
    }
    return 0;
}