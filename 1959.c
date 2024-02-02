#include <stdio.h>
int main()
{

    long long int a;
    int b;
    scanf("%lld%d", &a, &b);

    long long int r = a * b;
    printf("%lld\n", r);

    return 0;
}