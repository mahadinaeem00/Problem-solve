#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        if(a>b && a>c)
        {
            if(a*a==b*b + c*c)
                cout<<"Case "<<i<<": "<<"yes"<<endl;
            else
               cout<<"Case "<<i<<": "<<"no"<<endl;
        }

        else if(b>a && b>c)
        {
            if(b*b==a*a + c*c)
                cout<<"Case "<<i<<": "<<"yes"<<endl;
            else
               cout<<"Case "<<i<<": "<<"no"<<endl;
        }

        else if(c>b && c>a)
        {
            if(c*c==b*b + a*a)
                cout<<"Case "<<i<<": "<<"yes"<<endl;
            else
               cout<<"Case "<<i<<": "<<"no"<<endl;
        }

    }
    return 0;
}
