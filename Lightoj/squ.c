#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    float area,r;
    double pi=2.0*acos(0.0);

    for(int i=1;i<=t;i++)
    {
        scanf("%f",&r);
        area=(2*r*2*r)-(pi*r*r);
        printf("Case %d: %0.2f\n",i,area);
    }
    return 0;
}
