#include<stdio.h>
int main()
{
    int a,b=10,c;
    a=5;
    c=++a + a++ + a++ + a++;
    printf("%d %d %d",a,b,c);
}
