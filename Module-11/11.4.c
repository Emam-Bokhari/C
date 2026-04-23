#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];

    scanf("%s %s", &a, &b);

    int lengthOfA = strlen(a);
    int lengthOfB = strlen(b);

    for (int i = 0; i <= lengthOfA + lengthOfB; i++)
    {
        a[i + lengthOfA] = b[i];
    }

    printf("%s", a);

    return 0;
}