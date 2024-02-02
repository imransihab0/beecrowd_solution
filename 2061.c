#include <stdio.h>

int main()
{

    int x, n, f = 0, c = 0;
    char ch[10];
    scanf("%d %d", &x, &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", ch);
        if (ch[0] == 'f')
        {
            f++;
        }
        else
        {
            c++;
        }
    }
    printf("%d\n", x + f - c);

    return 0;
}