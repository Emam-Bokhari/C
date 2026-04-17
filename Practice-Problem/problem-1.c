// #include <stdio.h>
// int main()
// {
//         int n;
//         scanf("%d",&n);
//         int arr[n];

//         for(int i=0;i<n;i++){
//             scanf("%d",&arr[i]);
//         }

//         for(int i=0;i<n;i++){
//             if(arr[i]%2==0){
//                 printf("%d\n",arr[i]);
//             }
//         }

//         return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int arr[n];
//     int odd_number = 0;

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     };

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 != 0)
//         {
//             odd_number++;
//         }
//     }

//     printf("%d", odd_number);

//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    int max = 0;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    };

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("%d", max);

    return 0;
}