#include <stdio.h>
int main()
{

    int p, n, count = 1;
    scanf("%d%d", &p, &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            if ((arr[i + 1] - arr[i]) <= p && (arr[i + 1] - arr[i]) >= 0)
            {
                count = 1;
            }
            else
            {
                count = 0;
                break;
            }
        }
        else
        {
            if ((arr[i] - arr[i + 1]) <= p && (arr[i] - arr[i + 1]) >= 0)
            {
                count = 1;
            }
            else
            {
                count = 0;
                break;
            }
        }
    }
    if (count == 1)
    {
        printf("YOU WIN\n");
    }
    else
    {
        printf("GAME OVER\n");
    }

    return 0;
}