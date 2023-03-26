#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,rev;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        rev=0;
        cin>>n;
        int num=n;

        while(num>0)
        {
            int x=num%10;
            rev=(rev*10)+x;
            num/=10;
        }
        if(n==rev)
            cout<<"Case "<<i<<": "<<"Yes"<<endl;
//        else if(n==0)
//            cout<<"Case "<<i<<": "<<"Yes"<<endl;
        else
            cout<<"Case "<<i<<": "<<"No"<<endl;
    }
    return 0;
}
