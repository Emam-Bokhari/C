// // int, long long, char, float and double
// #include <stdio.h>
// int main()
// {
//     // variable
//     int int_value;
//     long long long_long_int_value;
//     char char_value;
//     float float_value;
//     double double_value;

//     // input
//     scanf("%d", &int_value);
//     scanf("%lld", &long_long_int_value);
//     scanf(" %c", &char_value);
//     scanf("%f", &float_value);
//     scanf("%lf", &double_value);

//     // output
//     printf("%d\n", int_value);
//     printf("%lld\n", long_long_int_value);
//     printf("%c\n", char_value);
//     printf("%.2f\n", float_value);
//     printf("%.1lf\n", double_value);
//     return 0;
// }
#include <stdio.h>

int main() {
    int a;
    long long b;
    char c;
    float d;
    double e;

    // single line input
    scanf("%d %lld %c %f %lf", &a, &b, &c, &d, &e);

    // output
    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%c\n", c);
    printf("%.2f\n", d);
    printf("%.1lf\n", e);

    return 0;
}