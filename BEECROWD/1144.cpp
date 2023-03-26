#include <iostream>

using namespace std;

int main() {

    int n,a=1,b=1,c=1;
    cin>>n;
    for(int i=0;i<n;i++)
       {
           cout<<a<<" "<<a*b<<" "<<a*b*c<<endl;
           cout<<a<<" "<<(a*b)+1<<" "<<(a*b*c)+1<<endl;
           a++;
           b++;
           c++;
       }

    return 0;
}
