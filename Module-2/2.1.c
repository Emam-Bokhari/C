#include <stdio.h>
int main()
{
    int x = 10, y = 5, z = 3;
    float a = 3;
    int sum = x + y + z;
    printf("Summation: %d\n", sum);

    int sub = x - y;
    printf("Substraction: %d\n", sub);

    int mul = x * y * z;
    printf("Multiplication: %d\n", mul);

    float div = x / a;
    printf("Division: %f", div);

    int mod = x % z;
    printf("Mod: %d\n", mod);

    return 0;
}