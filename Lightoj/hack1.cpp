#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    float x,d1,d2,N;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>d1>>d2;
        N=(x*d1)/d2;
        if(N==int(N))
            cout<<N<<endl;
        else
            cout<<int(N)+1<<endl;
        cout<<endl;
    }
    return 0;
}
