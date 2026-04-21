#include <stdio.h>
// #include <string.h>
int main()
{
    char a[20];
    // gets(a);
    // scanf("%s",&a);
    // fgets(variable,size,stdin); standard input
    fgets(a, 4, stdin);
    printf("%s", a);
    return 0;
}