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

// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int n;
//     int max = INT_MIN;
//     scanf("%d", &n);

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     };

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }

//     printf("%d", max);

//     return 0;
// }

// #include <stdio.h>
// #include<limits.h>
// int main()
// {
//         int n,min=INT_MAX;

//         scanf("%d",&n);
//         int arr[n];

//         for(int i=0;i<n;i++){
//             scanf("%d",&arr[i]);
//         };

//         for(int i=0;i<n;i++){
//             if(arr[i]<min){
//                 min=arr[i];
//             }
//         }

//         printf("%d",min);

//         return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     long long sum = 0;

//     scanf("%d", &n);

//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + a[i];
//     };

//     if (sum < 0)
//     {
//         sum = sum * -1;
//     }

//     printf("%lld", sum);

//     return 0;
// }