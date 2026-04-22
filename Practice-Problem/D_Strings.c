#include <stdio.h>
#include <string.h>
int main()
{
    char a[11];
    char b[11];

    scanf("%s", a);
    scanf("%s", b);

    int sizeOfA = strlen(a);
    int sizeOfB = strlen(b);
    printf("%d %d\n", sizeOfA, sizeOfB);
    printf("%s%s\n", a, b);

    char tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;

    printf("%s %s", a, b);

    return 0;
}