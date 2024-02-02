#include <stdio.h>
int main()
{

    double volume, diameter, height, area, radius;

    while ((scanf("%lf %lf", &volume, &diameter)) != EOF)
    {
        radius = diameter / 2;
        height = volume / (3.14 * radius * radius);
        area = 3.14 * radius * radius;

        printf("ALTURA = %.2lf\nAREA = %.2lf\n", height, area);
    }

    return 0;
}