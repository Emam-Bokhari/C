#include <stdio.h>
int main()
{
    long long m, n;

    scanf("%lld %lld", &m, &n);

    int sum = m % 10 + n % 10;
    printf("%d", sum);

    return 0;
}