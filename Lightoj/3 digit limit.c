#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int sum=0;
    int count=0;

    while(n>0)
    {
        x=n%10;
        sum+=x;
        n/=10;
        count++;
    }
    if(count==3)
        printf("%d",sum);
    else
    {
        printf("plz enter 3 digit number");
    }
  return 0;
}

