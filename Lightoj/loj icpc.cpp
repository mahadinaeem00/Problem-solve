#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,s,r;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p>>s>>r;
        if(p==s && r!=1)
            cout<<"Case "<<i<<": "<<"No"<<endl;
        else
            cout<<"Case "<<i<<": "<<"Yes"<<endl;
    }
    return 0;
}
