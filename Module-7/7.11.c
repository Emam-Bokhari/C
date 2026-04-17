// #include <stdio.h>
// int main()
// {
//     int arr[5];
//     int sum = 0;

//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     };

//     for (int i = 0; i < 5; i++)
//     {
//         sum = sum + arr[i];
//     };
//     printf("%d", sum);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    };

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
        sum += arr[i];
    };
    printf("%d",sum);

    return 0;
}