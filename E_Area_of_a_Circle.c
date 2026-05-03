#include <stdio.h>
int main()
{
    float r;
    scanf("%f", &r);

    double area = 3.141592653 * r * r;

    printf("%.9lf", area);

    return 0;
}