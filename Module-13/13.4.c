// // #include <stdio.h>
// // int main()
// // {
// //     int n;
// //     scanf("%d", &n);
// //     int star = 1;
// //     int space = n - 1;
// //     for (int i = 1; i <= n; i++) // loop for line
// //     {

// //         for (int k = 1; k <= space; k++) // loop for space
// //         {
// //             printf(" ");
// //         }

// //         for (int j = 1; j <= star; j++) // loop for star
// //         {
// //             printf("*");
// //         }
// //         printf("\n");
// //         star++;
// //         space--;
// //     }

// //     return 0;
// // }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int star = 2 * n - 1;
//     int space = 0;
//     for (int i = 1; i <= n; i++) // loop for print line
//     {

//         for (int k = 1; k <= space; k++) // loop for space
//         {
//             printf(" ");
//         }

//         for (int j = 1; j <= star; j++) // loop for star
//         {
//             printf("*");
//         }

//         printf("\n");

//         space++;
//         star -= 2;
//     }

//     return 0;
// }

