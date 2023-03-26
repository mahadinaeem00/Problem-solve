#include<stdio.h>
int main()
{
    int a,b=5;
    a=10;
    b+=++a + a++;
    printf("%d\t%d",a,b);
}
