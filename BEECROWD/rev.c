#include<stdio.h>
int main()
{
    int n,num,rem,rev;
    scanf("%d",&n);
    num=n;

    while(num>0)
    {
       rem=num%10;
       rev=(rev*10)+rem;
       num/=10;
    }
    if(rev==n)
        printf("Pallindrome");
    else
        printf("Not Pallindrome");

    return 0;
}
