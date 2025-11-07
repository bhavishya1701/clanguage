#include <stdio.h>
int main()
{
    int n, i;
    float factorial = 1;
    printf("enter the positive integer");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("factorial of %d = %.2f\n", n, factorial);
}