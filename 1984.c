#include <stdio.h>
int main()
{

    char ch[15];
    scanf("%s", ch);

    int len = 0, i = 0;
    while (ch[i] != '\0')
    {
        len++;
        i++;
    }

    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", ch[i]);
    }
    printf("\n");

    return 0;
}