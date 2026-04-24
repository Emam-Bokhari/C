#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];

    scanf("%s", &s);

    int length = strlen(s);

    int freq[26] = {0};

    for (int i = 0; i < length; i++)
    {
        int val = s[i];

        freq[val - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c - %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}