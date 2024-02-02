#include <stdio.h>
#include <string.h>
int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        char ch[1000];
        scanf("%s", ch);
        for (int j = 0; j < strlen(ch); j++)
        {
            if (ch[j] == '1')
            {
                sum += 2;
            }
            else if (ch[j] == '2')
            {
                sum += 5;
            }
            else if (ch[j] == '3')
            {
                sum += 5;
            }
            else if (ch[j] == '4')
            {
                sum += 4;
            }
            else if (ch[j] == '5')
            {
                sum += 5;
            }
            else if (ch[j] == '6')
            {
                sum += 6;
            }
            else if (ch[j] == '7')
            {
                sum += 3;
            }
            else if (ch[j] == '8')
            {
                sum += 7;
            }
            else if (ch[j] == '9')
            {
                sum += 6;
            }
            else if (ch[j] == '0')
            {
                sum += 6;
            }
        }
        printf("%d leds\n", sum);
    }

    return 0;
}