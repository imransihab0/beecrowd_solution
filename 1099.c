#include <stdio.h>

int main() {
    int n, x, y;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d%d", &x, &y);
        int odd = 0;

        if (x > y) {
            for (int j = y + 1; j < x; j++) {
                if (j % 2 == 1) {
                    odd += j;
                }
            }
            printf("%d\n", odd);
        } else if (y > x) {
            for (int k = x + 1; k < y; k++) {
                if (k % 2 == 1) {
                    odd += k;
                }
            }
            printf("%d\n", odd);
        } else {
            printf("0\n");
        }
    }

    return 0;
}
