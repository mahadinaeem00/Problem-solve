#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,p,l;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>p>>l;
        int x=l-p;
        if(x>=0)
           cout<<"Case "<<i<<": "<<(x+p)*4+19<<endl;
        else
           cout<<"Case "<<i<<": "<<(-x+p)*4+19<<endl;
    }
    return 0;
}
