#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,d,sum;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        sum=0;
        for(int i=0;i<n;i++)
        {
          cin>>d;
          if(d>0)
           sum+=d;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}
