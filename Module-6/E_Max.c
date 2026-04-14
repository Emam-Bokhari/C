#include <stdio.h>
#include <limits.h>
int main()
{
    int n, x;

    scanf("%d", &n);
    // scanf("%d", &x);

    int max = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &x);
        if (x > max)
        {
            max = x;
        }
    }
    printf("%d", max);

    return 0;
}