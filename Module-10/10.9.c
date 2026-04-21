#include <stdio.h>
int main()
{
    char a[101];
    scanf("%s", &a);

    printf("%s\n", a);
    int count = 0;
    for (int i = 0; i < a[i] != '\0'; i++)
    {
        count++;
    }

    printf("%d", count);

    return 0;
}