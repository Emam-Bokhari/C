#include <stdio.h>

int main()
{
    char a[101], b[101];

    scanf("%s %s", a, b);

    int i = 0;

    while (1)
    {
        // both end
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Equal");
            break;
        }

        // a shorter
        if (a[i] == '\0')
        {
            printf("A is smaller");
            break;
        }

        // b shorter
        if (b[i] == '\0')
        {
            printf("B is smaller");
            break;
        }

        // compare char
        if (a[i] < b[i])
        {
            printf("A is smaller");
            break;
        }

        if (b[i] < a[i])
        {
            printf("B is smaller");
            break;
        }

        // move next
        i++;
    }

    return 0;
}