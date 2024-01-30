#include <stdio.h>

int main() {
    int t; 
    scanf("%d", &t);

    while (t--) {
        int pa, pb; 
        double ga, gb; 
        int years = 0; 
        scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);

        while (pa <= pb) {
            pa = pa + (int)(pa * (ga / 100));
            pb = pb + (int)(pb * (gb / 100)); 
            years++;

            if (years > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        if (years <= 100)
            printf("%d anos.\n", years);
    }

    return 0;
}
