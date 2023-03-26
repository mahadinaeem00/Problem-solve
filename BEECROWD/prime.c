#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int count=0;
    printf("The prime number: ");
    for(int i=2;i<=n;i++)
    {
        count=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==0)
            printf("%d ",i);
    }
}
