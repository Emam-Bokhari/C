// #include <stdio.h>
// int main()
// {
//     int students[5];
//     students[0] = 101;
//     students[1] = 111;

//     printf("%d \n", students[0]);
//     printf("%d", students[1]);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//         for(int i=0;i<4;i++){
//             printf("a[%d]\n",i); // a[4]
//         }
//         return 0;
// }

#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    };

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}