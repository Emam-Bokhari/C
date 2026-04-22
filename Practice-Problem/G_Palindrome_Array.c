#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        if (a[left] != a[right])
        {
            printf("NO");
            return 0;
        }
        left++;
        right--;
    }

    printf("YES");

    return 0;
}