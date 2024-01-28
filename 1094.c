#include <stdio.h>

int main() {
    int rabit, rat, frog, n, x, total;
    char ch,sign;
    sign = '%';

    total = 0;
    rabit = 0;
    frog = 0;
    rat = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %c", &x, &ch);

        if (ch == 'C') {
            rabit += x;
        }
        if (ch == 'R') {
            rat += x;
        }
        if (ch == 'S') {
            frog += x;
        }
    }

    total = rabit + rat + frog;

    double pOfrabit,pOfrat,pOffrog;
    pOfrabit = ( (rabit/(total*1.00)) * 100.00 );
    pOfrat = ( (rat/(total*1.00)) * 100.00 );
    pOffrog = ( (frog/(total*1.00)) * 100.00 );

    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %c\nPercentual de ratos: %.2lf %c\nPercentual de sapos: %.2lf %c\n", total, rabit, rat, frog,pOfrabit,sign,pOfrat,sign,pOffrog,sign);

    return 0;
}
