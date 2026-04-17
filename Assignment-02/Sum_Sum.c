#include <stdio.h>
int main()
{
    int n;
    int x;
    scanf("%d", &n);
    int positiveNumber = 0;
    int negativeNumber = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x > 0)
        {
            positiveNumber = x + positiveNumber;
        }
        else if (x < 0)
        {
            negativeNumber = x + negativeNumber;
        }
    };

    printf("%d %d ", positiveNumber, negativeNumber);

    return 0;
};
