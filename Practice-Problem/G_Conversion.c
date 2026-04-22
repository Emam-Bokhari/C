#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    scanf("%s", s);

    int sizeOfS = strlen(s);

    for (int i = 0; i < sizeOfS; i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            // if capital then small case
            s[i] += 32;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }

    printf("%s", s);

    return 0;
}