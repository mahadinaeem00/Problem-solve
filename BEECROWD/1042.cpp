#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a<b && a<c)
        {
            if(b>a && b<c)
                cout<<a<<endl<<b<<endl<<c<<endl<<endl;
                cout<<a<<endl<<b<<endl<<c<<endl;
        }
    else if(b<a && b<c)
    {
        if(a>b && a<c)
            cout<<b<<endl<<a<<endl<<c<<endl<<endl;
            cout<<a<<endl<<b<<endl<<c<<endl;
    }
    else
    {
        cout<<c<<endl<<a<<endl<<b<<endl<<endl;
        cout<<a<<endl<<b<<endl<<c<<endl;
    }

}
