#include <stdio.h>
#include <string.h>
int main()
{
    char x[101], y[101];

    scanf("%s %s", x, y);

    int lengthOfX = strlen(x);
    int lengthOfY = strlen(y);

    for (int i = 0; i <= lengthOfY; i++)
    {
        x[i] = y[i];
    }

    printf("%s %s", x, y);

    return 0;
}