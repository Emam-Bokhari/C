// #include <stdio.h>
// int main()
// {

//     int tk;
//     scanf("%d", &tk);

//     if (tk >= 100)
//     {
//         printf("Burger khabo");
//     }
//     else if (tk >= 50)
//     {
//         printf("Fochka khabo");
//     }
//     else
//     {
//         printf("kiso e khabo na");
//     };

//     return 0;
// }

#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    if (x > 0)
    {
        printf("Positive Number");
    }
    else if(x<0)
    {
        printf("Negative Number");
    }else{
        printf("Zero");
    };
    return 0;
}
