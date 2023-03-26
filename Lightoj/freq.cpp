#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }

    //int count=0;
    for(int val=1;val<=n;val++)
    {
        int count=0;
        if(ara[val]==val)
           {
               count++;
               cout<<val<<" "<<count<<endl;
           }
    }

}
