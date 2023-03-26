#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(int j=i*2;j<n*2;j++)
        {
            cout<<"  ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    //reverse the loop
     for(int i=n-1;i>=1;i--)
    {
       for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(int j=i*2;j<n*2;j++)
        {
            cout<<"  ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
}
}
