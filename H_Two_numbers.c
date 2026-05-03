#include <stdio.h>
#include <math.h>
int main()
{
    double m, n;

    scanf("%lf %lf", &m, &n);

    double divided = m / n;

    printf("floor %0.lf / %0.lf = %0.lf\n", m, n, floor(divided));
    printf("ceil %0.lf / %0.lf = %0.lf\n", m, n, ceil(divided));
    printf("round %0.lf / %0.lf = %0.lf\n", m, n, round(divided));

    return 0;
}