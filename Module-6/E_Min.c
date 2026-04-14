#include <stdio.h>
#include <limits.h>
int main()
{
    int n, x;
    int min = INT_MAX; // 100
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &x);
        if (min > x)
        {
            min = x;
        }
    }
    printf("%d", min);

    return 0;
}