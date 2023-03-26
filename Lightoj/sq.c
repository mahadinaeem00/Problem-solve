#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    double pi = 3.1416;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        double r;
        scanf("%lf", &r);
        double area = (2 * r * 2 * r) - (pi * r * r);
        printf("Case %d: %.2lf\n", i, area);
    }
    return 0;
}
