#include <stdio.h>
int main()
{

    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            int temp;
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    if (arr[0] + arr[1] > arr[2])
    {
        printf("S\n");
    }
    else if (arr[1] + arr[2] > arr[3])
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}