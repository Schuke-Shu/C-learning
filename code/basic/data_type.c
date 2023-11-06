// 数据类型
#include <stdio.h>
#include <inttypes.h> // 支持可移植类型

int main()
{
    short s;
    int i;
    long int l;
    long long int ll;
    char c;
    float f;
    double d;
    double _Complex cp;
//    double _Imaginary ig;

    int32_t i32;

    printf("Size of short: %lld\n", sizeof(short));
    printf("Size of int: %lld\n", sizeof(int));
    printf("Size of long: %lld\n", sizeof(long));
    printf("Size of long long: %lld\n", sizeof(long long));
    printf("Size of char: %lld\n", sizeof(char));
    printf("Size of float: %lld\n", sizeof(float));
    printf("Size of double: %lld\n", sizeof(double));
    printf("Size of double _Complex: %lld\n", sizeof(double _Complex));
//    printf("Size of double _Imaginary: %lld\n", sizeof(double _Imaginary));
    printf("Size of int32_t: %lld\n", sizeof(int32_t));

    // 打印语句中的*
    int width = 6;

    printf("Print integer: [%*d]\n", width, 256);

    width = 8;
    int precision = 3;

    printf("Print float: [%*.*f]\n", width, precision, 100.0);

    // 扫描语句中的*
    int n;

    printf("Enter three integers: \n");
    scanf("%*d %*d %d", &n);
    printf("Get number: %d\n", n);

    return 0;
}