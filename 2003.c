#include <stdio.h>
int main()
{

    int h, m, delay;
    while (scanf("%d:%d", &h, &m) != EOF)
    {
        if (h < 7)
        {
            delay = 0;
        }
        else if (h == 7)
        {
            delay = m;
        }
        else if (h == 8)
        {
            delay = 60 + m;
        }
        else if (h == 9)
        {
            delay = 120 + m;
        }
        printf("Atraso maximo: %d\n", delay);
    }

    return 0;
}