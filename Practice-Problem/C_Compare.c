#include <stdio.h>
#include <stdbool.h>
int main()
{
    char x[21], y[21];

    scanf("%s %s", &x, &y);

    int i = 0;

    while (true)
    {
        if (x[i] == '\0' && y[i] == '\0')
        {
            printf("%s", x);
            break;
        }

        if (x[i] == '\0')
        {
            printf("%s", x);
            break;
        }

        if (y[i] == '\0')
        {
            printf("%s", y);
            break;
        }

        if (x[i] < y[i])
        {
            printf("%s", x);
            break;
        }

        if (y[i] < x[i])
        {
            printf("%s", y);
            break;
        }

      

        i++;
    }

    return 0;
}