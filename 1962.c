#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        if (x < 2014)
        {
            printf("%d D.C.\n", 2015 - x);
        }
        else if (x > 2014)
        {
            printf("%d A.C.\n", x - 2014);
        }
        else if (x == 2014)
        {
            printf("1 D.C.\n");
        }
    }

    return 0;
}