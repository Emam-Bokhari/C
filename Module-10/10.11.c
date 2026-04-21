#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int sizeOfString = strlen(s);
    printf("%d", sizeOfString);
    return 0;
}