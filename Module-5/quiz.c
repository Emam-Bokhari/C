// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     a = 5;
//     b = 1;
//     c = 3;

//     if (a > b && b > c)
//     {
//         printf("%d", a);
//     }
//     else if (b > a && c > b)
//     {
//         printf("%d", b);
//     }
//     else
//     {
//         printf("%d", c);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x = 1;
//     if (x < 5)
//     {
//         printf("hello");
//     };

//     if (x <= 10)
//     {
//         printf("hi");
//     }
//     else
//     {
//         printf("no");
//     };
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x = 4;
//     if (x % 2 != 0)
//     {
//         printf("Odd ");
//     }
//     else
//     {
//         printf("Even ");
//     };
//     if (x > 0)
//     {
//         printf("Positive");
//     }
//     else
//     {
//         printf("Negative");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
        int x=0;
        if(x==1){
            if(x==0){
                printf("inside if if\n");
            }else{
                printf("inside if else\n");
            }
        }else{
            printf("inside else\n");
        }
        return 0;
}