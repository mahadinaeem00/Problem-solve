#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    cout<<a<<" "<<a.length();
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==0)
            cout<<1;
        else if(a[i]==1)
            cout<<0;
//        else
//        {
//            cout<<"Error";
//            break;
//        }
    }



}
