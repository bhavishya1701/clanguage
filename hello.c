#include <stdio.h>

int main()
{
    float c;
    printf("enter c");
    scanf("%f ", &c);

    printf("fahrenheit temp is : %f", (c * 1.8) + 32);

    return 0;
}