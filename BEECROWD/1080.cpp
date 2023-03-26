#include<bits/stdc++.h>

using namespace std;

int main() {

    int n,i,pos;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
       {
           cin>>ara[i];
       }
     int max=ara[0];
     for(i=0;i<n;i++)
        {
            if(ara[i]>max)
               max=ara[i];

            if(max==ara[i])
                pos=i+1;

        }
        cout<<max<<endl;
        cout<<pos<<endl;


    return 0;
}
