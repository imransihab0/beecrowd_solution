#include <stdio.h>
#include <string.h>
int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        char str[10000];
        scanf("%s", str);

        printf("%.2lf\n", (strlen(str) * 0.01));
    }

    return 0;
}