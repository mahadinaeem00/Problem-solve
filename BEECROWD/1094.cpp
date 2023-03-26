#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    char ch;

    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>ch;
        sum+=a;
    }
    cout<<"Total sum: "<<sum<<endl;


        sum=0;
        if(ch=='C')
        {
            sum+=a;
        }
        cout<<"Total de coelhos: "<<sum<<endl;

        sum=0;
        if(ch=='R')
        {
            sum+=a;
        }
        cout<<"Total de ratos: "<<sum<<endl;



        sum=0;
        if(ch=='R')
        {
            sum+=a;
        }
        cout<<"Total de ratos: "<<sum<<endl;



}
