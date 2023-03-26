#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,j;
    long long fact,sum;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=0;
        j=i;
        while(j>0)
        {
            int x=j%10;
            fact=1;
            for(int k=1;k<=x;k++)
            {
                fact*=k;
            }
            sum+=fact;
            j/=10;
        }
        if(sum==i)
            cout<<i<<" ";
    }
    return 0;
}
