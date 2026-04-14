#include <stdio.h>
int main()
{
    int password;

    while (scanf("%d", &password))
    {
        if (password != 1999)
        {
            printf("Wrong \n");
        }
        else
        {
            printf("Correct \n");
            break;
        }
    }

    return 0;
}