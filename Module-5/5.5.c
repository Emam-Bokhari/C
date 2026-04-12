// #include <stdio.h>
// int main()
// {
//         int x=65;
//         printf("%c \n",x);
//         printf("%d \n",x);
//         return 0;
// }
#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        ch -= 32;
        printf("%c",ch);
    }
    else
    {
        ch += 32;
        printf("%c",ch);
    }
    return 0;
}