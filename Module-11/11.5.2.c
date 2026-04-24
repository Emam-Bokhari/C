#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int frequencyArray[6] = {0};

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            frequencyArray[0]++;
        }
        if (a[i] == 1)
        {
            frequencyArray[1]++;
        }
        if (a[i] == 2)
        {
            frequencyArray[2]++;
        }
        if (a[i] == 3)
        {
            frequencyArray[3]++;
        }
        if (a[i] == 4)
        {
            frequencyArray[4]++;
        }
        if (a[i] == 5)
        {
            frequencyArray[5]++;
        }
    }

    printf("0: %d\n", frequencyArray[0]);
    printf("1: %d\n", frequencyArray[1]);
    printf("2: %d\n", frequencyArray[2]);
    printf("3: %d\n", frequencyArray[3]);
    printf("4: %d\n", frequencyArray[4]);
    printf("5: %d\n", frequencyArray[5]);

    return 0;
}