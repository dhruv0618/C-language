#include <stdio.h>
int main()
{
    int a, i, sum = 0;
    for (i = 1; i <= 5; i++)
    {
        printf("Enter a number "); // Agr hm enter a number ko uper likh de to ek hi bar ayega
        scanf("%d", &a);
        if (a < 0)
            break;
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}
