#include <stdio.h>
#include <string.h>
int main()
{
    char f1[101], s1[101], f2[101], s2[101];
    scanf(" %s %s %s %s", &f1, &s1, &f2, &s2);

    if (strcmp(s1, s2) == 0)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }

    return 0;
}