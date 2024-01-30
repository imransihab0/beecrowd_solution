#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int a, x, sum = 0;
        scanf("%d", &a);
        
        for (x = 1; x < a; x++) {
            if (a % x == 0) {
                sum += x;
            }
        }

        if (sum == a) {
            printf("%d eh perfeito\n", a);
        } else {
            printf("%d nao eh perfeito\n", a);
        }
    }

    return 0;
}
