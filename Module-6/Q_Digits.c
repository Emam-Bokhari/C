// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     while (n != 0)
//     {
//         printf("%d ", n % 10);
//         n /= 10;
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n, x;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);

        do
        {
            printf("%d ", x % 10);
            x /= 10;
        } while (x != 0);

            printf("\n");
    }
    return 0;
}