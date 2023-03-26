#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,x,fact;
    cin>>n;
    int num=n;
    while(num>0)
    {
       //sum=0;
       x=num%10;
       num/=10;
       fact=1;
       for(int i=1;i<=x;i++)
       {
           fact*=i;
       }
       sum+=fact;
    }
    if(n==sum)
        cout<<"Thats Strong Number"<<endl;
    else
        cout<<"Thats Not Strong Number"<<endl;

    return 0;
}
