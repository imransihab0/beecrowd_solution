#include <stdio.h>
int main()
{

    int x;
    while ((scanf("%d", &x)) != EOF)
    {
        int module, a, b, res, i = 0;
        char ch[15];
        while (x != 0)
        {
            module = x % 16;
            res = x / 16;
            x = res;

            if (module >= 0 && module < 10)
            {
                ch[i] = module + '0';
            }
            else if (module >= 10 && module <= 15)
            {
                a = module - 10;
                b = 'A' + a;
                ch[i] = b;
            }
            i++;
        }
        ch[i] = '\0';
        int j = 0;
        i--;
        while (j < i)
        {
            char temp = ch[j];
            ch[j] = ch[i];
            ch[i] = temp;
            j++;
            i--;
        }
        printf("%s\n", ch);
    }

    return 0;
}