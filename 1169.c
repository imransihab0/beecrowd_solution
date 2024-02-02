#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x;
        long long int wheat_grains = 1, grams, kgs;
        scanf("%d", &x);
        if (x < 63)
        {
            for (int j = 0; j < x; j++)
            {
                wheat_grains *= 2;
            }

            grams = wheat_grains / 12;
            kgs = grams / 1000;

            printf("%lld kg\n", kgs);
        }
        else if (x == 63)
        {
            printf("768614336404564 kg\n");
        }
        else if (x == 64)
        {
            printf("1537228672809129 kg\n");
        }
    }

    return 0;
}