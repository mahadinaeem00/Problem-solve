#include<iostream>
using namespace std;

int main()
{
    int t,n,x1,y1,x2,y2,x,y;
    cin>>t;
    cin>>x1>>y1>>x2>>y2;

    for(int i=1;i<=t;i++)
    {
        cin>>n;
        cout<<"Case "<<i<<":"<<endl;
        for(int j=1;j<=n;j++)
        {
            cin>>x>>y;

            if(x>x1 && x<x2 && y>y1 && y<y2)
                cout<<"Yes"<<endl;
            else
                 cout<<"No"<<endl;
        }
    }
    return 0;
}
