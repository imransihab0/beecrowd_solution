#include <stdio.h>

int main() {
    int par[5], impar[5], x, count_impar = 0, count_par = 0;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &x);

        if (x % 2 == 0) {
            par[count_par] = x;
            count_par++;
            if (count_par == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                count_par = 0;
            }
        } else {
            impar[count_impar] = x;
            count_impar++;
            if (count_impar == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                count_impar = 0;
            }
        }
    }
    for (int j = 0; j < count_impar; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }
    for (int j = 0; j < count_par; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}
