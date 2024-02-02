#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a < b)
        {
            int tempz = a;
            a = b;
            b = tempz;
        }
        int final;

        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
            final = a;
        }

        printf("%d\n", final);
    }

    return 0;
}