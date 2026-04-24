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

    int count_two = 0;
    int count_three = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            count_two++;
        }

        if (a[i] % 3 == 0 && a[i] % 2 != 0)
        {
            count_three++;
        }
    }
    printf("%d %d", count_two, count_three);

    return 0;
}