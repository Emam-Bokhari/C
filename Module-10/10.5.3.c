#include <stdio.h>
#include <string.h>
int main()
{
    int m;
    scanf("%d", &m);

    int a[m];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    int n;
    scanf("%d", &n);

    int b[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    int sizeOfTwoArray = m + n;

    int c[sizeOfTwoArray];

    // copy 1st array
    for (int i = 0; i < m; i++)
    {
        c[i] = a[i];
    }

    // copy 2nd array
    for (int i = 0; i < n; i++)
    {
        c[m + i] = b[i];
    }

    for (int i = 0; i < sizeOfTwoArray; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}

/*
1. input n,m
2. input 2 array
3. size of 2 array
4. 3rd array
5. copy 1nd array
6. copy 2nd array
*/