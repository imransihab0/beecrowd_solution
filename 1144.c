#include <stdio.h>

int main() {
    int n,a,b;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        a = i*i;
        b = a*i;

        printf("%d %d %d\n", i, a, a*i);
        printf("%d %d %d\n", i, a+1, b+1);
    }


    return 0;
}