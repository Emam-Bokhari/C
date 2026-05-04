#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++) // loop for print line
    {
        for (int s = 1; s <= space; s++) // loop for space
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++) // loop for print star
        {
            printf("*");
        }
        star += 2;
        space--;

        printf("\n");
    }

    return 0;
}