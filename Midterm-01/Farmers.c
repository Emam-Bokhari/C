#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int singleWorkerDay = m1 * d;

        int totalWorkers = m1 + m2;
        int newDay = singleWorkerDay / totalWorkers;

        int savedDays = d - newDay;

        printf("%d\n", savedDays);
    }

    return 0;
}