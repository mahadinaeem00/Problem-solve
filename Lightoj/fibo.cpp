#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n;
    a=0;
    b=1;
    c=0;
    for(int i=1;i<=n;i++)
    {
        cout<<c<<" ";
        a=b;
        b=c;
        c=a+b;
    }

}
