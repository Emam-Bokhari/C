#include <stdio.h>
int main()
{

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("Even Number: %d", i);
            if (i == 96)
            {
                break;
            }
        }
    }

    return 0;
}