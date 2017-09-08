// 求两数最大公约数的Euclid算法
#include <stdio.h>
int gcd(int a, int b);
int main()
{
    int a = 252, b = 105;
    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
    a = 2260, b = 816;
    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
    getchar();
    return 0;
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}